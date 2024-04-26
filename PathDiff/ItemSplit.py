import re
import regex
import sys
import json
import subprocess
import clang.cindex
from clang.cindex import Index, CursorKind

def parse_code(code):
    # Create an index for indexing the translation units.
    index = Index.create()
    identifierList = []
    keywordList = []
    memberList = []
    # Parse the source code into a translation unit.
    tu = index.parse('tmp.cpp', args=['-std=c++11'], unsaved_files=[('tmp.cpp', code)], options=0)

       # Get the cursor for the translation unit.
    cursor = tu.cursor
    isMember = False
    # for token in cursor.get_tokens():
    #     print(token.spelling)
    #print("=====================================")
    for token in cursor.get_tokens():
        if token.kind == clang.cindex.TokenKind.KEYWORD:
            #print it in red
            #print("\033[91m" + token.spelling + "\033[0m")
            keywordList.append(token.spelling)
        if token.kind == clang.cindex.TokenKind.IDENTIFIER:
            #print it in yellow
            #print("\033[93m" + token.spelling + "\033[0m")
            if isMember:
                memberList[-1] = memberList[-1] + token.spelling
                identifierList.append(memberList[-1])
                isMember = False
            else:
                identifierList.append(token.spelling)
        if token.kind == clang.cindex.TokenKind.PUNCTUATION:
            if token.spelling == "." or token.spelling == "->":
                if len(identifierList) == 0:
                    continue
                memberList.append(identifierList[-1] + token.spelling)
                isMember = True
    identifierList = list(set(identifierList))
    keywordList = list(set(keywordList))
    memberList = list(set(memberList))
    # delete items that are both in identifierList and memberList
    for member in memberList:
        if member in identifierList:
            identifierList.remove(member)
    return identifierList, keywordList, memberList

def identify_cursor_kind(line):
    patterns = {
        # Control flow statements
        'CursorKind.INDIRECT_GOTO_STMT': r'\bgoto\b\s*\*',
        'CursorKind.EXIT_STMT': r'\bexit\s*\(.*\)',
        'CursorKind.IF_STMT': r'\bif\s*\(.*\)',
        'CursorKind.ELSE_STMT': r'\belse\b',
        'CursorKind.FOR_STMT': r'\bfor\s*\(.*\)',
        'CursorKind.WHILE_STMT': r'\bwhile\s*\(.*\)',
        'CursorKind.DO_STMT': r'\bdo\s*\{',
        'CursorKind.SWITCH_STMT': r'\bswitch\s*\(.*\)',
        'CursorKind.CASE_STMT': r'\bcase\s+.*:',
        'CursorKind.DEFAULT_STMT': r'\bdefault\s*:',
        'CursorKind.GOTO_STMT': r'\bgoto\s+\w+',
        'CursorKind.CONTINUE_STMT': r'\bcontinue\s*',
        'CursorKind.BREAK_STMT': r'\bbreak\s*',
        'CursorKind.RETURN_STMT': r'\breturn\b',
        'CursorKind.CXX_CATCH_STMT': r'\bcatch\s*\(',
        'CursorKind.CXX_TRY_STMT': r'\btry\s*{',
        'CursorKind.CXX_FOR_RANGE_STMT': r'\bfor\s*\(\s*auto\s+\w+\s*:\s*\w+\s*\)'
    }
    patterns_secondaries = {
        # basic operators
        'CursorKind.COMPOUND_ASSIGNMENT_OPERATOR': r'.*\b\w+\s*[\+\-\*/%&|^]=.*',
        'CursorKind.LOGICAL_OPERATOR': r'.*(&&|\|\|).*',
        'CursorKind.COMPARE_OPERATOR': r'(.*[<>!]=?.*)|(.*==.*)',
        'CursorKind.VAR_DECL': r'^[a-zA-Z_][a-zA-Z0-9_.]*\s[a-zA-Z_][a-zA-Z0-9_]*\s*',
        'CursorKind.CALL_EXPR': r'^[a-zA-Z_][a-zA-Z0-9_.]*\([^()]*\)$',
        # 'CursorKind.ARRAY_SUBSCRIPT_EXPR': r'^[a-zA-Z_][a-zA-Z0-9_]*\[.*\]$',
        'CursorKind.OTHER_LABEL': r'\b\w+:\s*',
        'CursorKind.ASSIGNMENT_OPERATOR': r'.*=.*',
        'CursorKind.ARRAY_TYPE': r'^[a-zA-Z_][a-zA-Z0-9_.]*\s*\[[^\[\]]*\]',
        'CursorKind.BINARY_OPERATOR': r'.*[\+\-\*\/%]\s*.*',
        'CursorKind.VARIABLE': r'^[\*&!]?[a-zA-Z_][a-zA-Z0-9_.]*$'
    }

    patterns_third = {
        # Patterns for declarations
        'CursorKind.STRUCT_DECL': r'\bstruct\s+\w+',
        'CursorKind.UNION_DECL': r'\bunion\s+\w+',
        'CursorKind.CLASS_DECL': r'\bclass\s+\w+',
        'CursorKind.ENUM_DECL': r'\benum\s+\w+',
        'CursorKind.FIELD_DECL': r'(struct|class)\s+\w+\s*{.*}\s*\w+',
        'CursorKind.ENUM_CONSTANT_DECL': r'\b\w+\s*=\s*(-)?\d+',
        'CursorKind.FUNCTION_DECL': r'^[a-zA-Z_][a-zA-Z0-9_.]* [a-zA-Z_][a-zA-Z0-9_.]*\(.*\)$',
        'CursorKind.TYPEDEF_DECL': r'\btypedef\s+\w+\s+\w+',
        'CursorKind.FUNCTION_TEMPLATE': r'\btemplate\s*<.*>\s*\w+\s+\w+\s*\([^)]*\)',
        'CursorKind.CLASS_TEMPLATE': r'\btemplate\s*<.*>\s*class\s+\w+',
        'CursorKind.CLASS_TEMPLATE_PARTIAL_SPECIALIZATION': r'\btemplate\s*<.*>\s*class\s+\w+\s*<.*>'
    }

    if not line:
        return "CursorKind.UNEXPOSED_EXPR"

    for kind, pattern in patterns.items():
        if re.search(pattern, line, re.IGNORECASE):
            return kind

    if line[-1] == ')' and re.search(r'^[a-zA-Z_][a-zA-Z0-9_]*$', line.split('(')[0], re.IGNORECASE):
        return 'CursorKind.CALL_EXPR'

    for kind, pattern in patterns_secondaries.items():
        if re.search(pattern, line, re.IGNORECASE):
            return kind

    for kind, pattern in patterns_third.items():
        if re.search(pattern, line, re.IGNORECASE):
            return kind



    return "CursorKind.UNEXPOSED_EXPR"  # Default kind if no specific pattern matches





if __name__ == '__main__':
    code_lines = """
    static void ssl_write_hostname_ext(mbedtls_ssl_context *ssl, unsigned char *buf,size_t *olen) {
      unsigned char *p = buf
      const unsigned char *end = ssl->out_msg + MBEDTLS_SSL_MAX_CONTENT_LEN
      size_t hostname_len

      *olen = 0

      if (ssl->hostname == NULL)
        return

      MBEDTLS_SSL_DEBUG_MSG(3, ("client hello, adding server name extension: %s", ssl->hostname))

      hostname_len = strlen(ssl->hostname)

      if (end < p || (size_t)(end - p) < hostname_len + 9) {
        MBEDTLS_SSL_DEBUG_MSG(1, ("buffer too small"))
        return
      }
    """
