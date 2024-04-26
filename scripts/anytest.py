import re

def identify_cursor_kind(line):
    # patterns = {
    #     # Control flow statements
    #     'CursorKind.INDIRECT_GOTO_STMT': r'\bgoto\b\s*\*',
    #     'CursorKind.IF_STMT': r'\bif\s*\(.*\)',
    #     'CursorKind.FOR_STMT': r'\bfor\s*\(.*\)',
    #     'CursorKind.WHILE_STMT': r'\bwhile\s*\(.*\)',
    #     'CursorKind.DO_STMT': r'\bdo\s*\{',
    #     'CursorKind.SWITCH_STMT': r'\bswitch\s*\(.*\)',
    #     'CursorKind.CASE_STMT': r'\bcase\s+.*:',
    #     'CursorKind.DEFAULT_STMT': r'\bdefault\s*:',
    #     'CursorKind.GOTO_STMT': r'\bgoto\s+\w+;',
    #     'CursorKind.CONTINUE_STMT': r'\bcontinue\s*;',
    #     'CursorKind.BREAK_STMT': r'\bbreak\s*;',
    #     'CursorKind.RETURN_STMT': r'\breturn\b',
    #     'CursorKind.CXX_CATCH_STMT': r'\bcatch\s*\(',
    #     'CursorKind.CXX_TRY_STMT': r'\btry\s*{',
    #     'CursorKind.CXX_FOR_RANGE_STMT': r'\bfor\s*\(\s*auto\s+\w+\s*:\s*\w+\s*\)',
    #     'CursorKind.OTHER_LABEL': r'\b\w+:\s*',
    #
    #     # Inline function calls
    #     'CursorKind.SIZE_OF_PACK_EXPR': r'sizeof\(\s*\.\.\.\s*\w+\s*\)',
    #
    #
    #     # Patterns for declarations
    #     'CursorKind.STRUCT_DECL': r'\bstruct\s+\w+',
    #     'CursorKind.UNION_DECL': r'\bunion\s+\w+',
    #     'CursorKind.CLASS_DECL': r'\bclass\s+\w+',
    #     'CursorKind.ENUM_DECL': r'\benum\s+\w+',
    #     'CursorKind.FIELD_DECL': r'(struct|class)\s+\w+\s*{.*}\s*\w+;',
    #     'CursorKind.ENUM_CONSTANT_DECL': r'\b\w+\s*=\s*\d+',
    #     'CursorKind.FUNCTION_DECL': r'\b\w+\s+\w+\s*\([^)]*\)',
    #     'CursorKind.VAR_DECL': r'\b\w+\s+\w+\s*=\s*.*;',
    #     'CursorKind.PARM_DECL': r'\b\w+\s+\w+\s*\([^)]*\)',  # Simplified, matches function decl
    #     'CursorKind.CXX_UNARY_EXPR': r'\b[\+\-!~&*]\w+|\w+[\+\-]{2}',
    #     'CursorKind.TYPEDEF_DECL': r'\btypedef\s+\w+\s+\w+;',
    #     'CursorKind.FUNCTION_TEMPLATE': r'\btemplate\s*<.*>\s*\w+\s+\w+\s*\([^)]*\)',
    #     'CursorKind.CLASS_TEMPLATE': r'\btemplate\s*<.*>\s*class\s+\w+',
    #     'CursorKind.CLASS_TEMPLATE_PARTIAL_SPECIALIZATION': r'\btemplate\s*<.*>\s*class\s+\w+\s*<.*>',
    #
    #
    #     'CursorKind.CHARACTER_LITERAL': r"'.'",
    #     # e.g. "x = x + 1"
    #     'CursorKind.ASSIGNMENT_OPERATOR': r'(\w+\s*=\s*[^=]+.*)|(\w+\s*[\+\-\*\/%&\|\^]=\s*.+)',
    #     'CursorKind.INIT_VAR_DECL': r'\b\w+\s+\w+\s*=\s*.*;',
    #     # binary operators should never contain ","
    #     'CursorKind.BINARY_OPERATOR': r'.*\b[\+\-\*/%&|^<>]=?.*\b.*',
    #     'CursorKind.UNARY_OPERATOR': r'.*\b[\+\-\*!&~]\w+\b.*',
    #     'CursorKind.CONDITIONAL_OPERATOR': r'.*\?.*\:.*',
    #     'CursorKind.CSTYLE_CAST_EXPR': r'\(\w+\s*\w*\)\s*\w+',
    #     'CursorKind.ARRAY_SUBSCRIPT_EXPR': r'\w+\[\w+\]',
    #     'CursorKind.CALL_EXPR': r'\b\w+\s*\([^)]*\)\s*;',
    #     'CursorKind.COMPOUND_ASSIGNMENT_OPERATOR': r'.*\b\w+\s*[\+\-\*/%&|^]=.*',
    #     'CursorKind.OBJC_STRING_LITERAL': r'@\w+',
    #     'CursorKind.CXX_STATIC_CAST_EXPR': r'static_cast<\w+\s*\w*>',
    #     'CursorKind.CXX_BOOL_LITERAL_EXPR': r'\b(true|false)\b',
    #     'CursorKind.CXX_NULL_PTR_LITERAL_EXPR': r'\bnullptr\b',
    #     'CursorKind.CXX_DYNAMIC_CAST_EXPR': r'dynamic_cast<\w+\s*\w*>',
    #     'CursorKind.CXX_REINTERPRET_CAST_EXPR': r'reinterpret_cast<\w+\s*\w*>',
    #     'CursorKind.CXX_CONST_CAST_EXPR': r'const_cast<\w+\s*\w*>',
    #     'CursorKind.CXX_FUNCTIONAL_CAST_EXPR': r'\b\w+\s*\(\w+\)',
    #     'CursorKind.GNU_NULL_EXPR': r'__null',
    #     'CursorKind.OBJC_SELECTOR_EXPR': r'@selector\(\w+\)',
    #     'CursorKind.OBJC_PROTOCOL_EXPR': r'@protocol\(\w+\)',
    #     'CursorKind.OBJC_BRIDGE_CAST_EXPR': r'__bridge_transfer',
    #     'CursorKind.LAMBDA_EXPR': r'\[\s*\]\s*\(.*\)\s*\{.*\}',
    #     'CursorKind.OBJC_BOOL_LITERAL_EXPR': r'\b(YES|NO)\b',
    #     'CursorKind.CXX_THIS_EXPR': r'\bthis\b',
    #     'CursorKind.CXX_THROW_EXPR': r'\bthrow\b',
    #     'CursorKind.CXX_NEW_EXPR': r'\bnew\b',
    #     'CursorKind.CXX_DELETE_EXPR': r'\bdelete\b',
    #     # Generic expressions
    #
    #     'CursorKind.INTEGER_LITERAL': r'\b\d+\b',
    #     'CursorKind.FLOATING_LITERAL': r'\b\d+\.\d*f?\b',
    #     'CursorKind.IMAGINARY_LITERAL': r'\b\d+(\.\d+)?(i|j)\b',
    #     'CursorKind.STRING_LITERAL': r'"[^"]*"',
    #     'CursorKind.DECL_REF_EXPR': r'\b\w+\b;',
    # }
    patterns = {
        # Control flow statements
        'CursorKind.INDIRECT_GOTO_STMT': r'\bgoto\b\s*\*',
        'CursorKind.IF_STMT': r'\bif\s*\(.*\)',
        'CursorKind.FOR_STMT': r'\bfor\s*\(.*\)',
        'CursorKind.WHILE_STMT': r'\bwhile\s*\(.*\)',
        'CursorKind.DO_STMT': r'\bdo\s*\{',
        'CursorKind.SWITCH_STMT': r'\bswitch\s*\(.*\)',
        'CursorKind.CASE_STMT': r'\bcase\s+.*:',
        'CursorKind.DEFAULT_STMT': r'\bdefault\s*:',
        'CursorKind.GOTO_STMT': r'\bgoto\s+\w+;',
        'CursorKind.CONTINUE_STMT': r'\bcontinue\s*;',
        'CursorKind.BREAK_STMT': r'\bbreak\s*;',
        'CursorKind.RETURN_STMT': r'\breturn\b',
        'CursorKind.CXX_CATCH_STMT': r'\bcatch\s*\(',
        'CursorKind.CXX_TRY_STMT': r'\btry\s*{',
        'CursorKind.CXX_FOR_RANGE_STMT': r'\bfor\s*\(\s*auto\s+\w+\s*:\s*\w+\s*\)',

        # Patterns for declarations
        'CursorKind.STRUCT_DECL': r'\bstruct\s+\w+',
        'CursorKind.UNION_DECL': r'\bunion\s+\w+',
        'CursorKind.CLASS_DECL': r'\bclass\s+\w+',
        'CursorKind.ENUM_DECL': r'\benum\s+\w+',
        'CursorKind.FIELD_DECL': r'(struct|class)\s+\w+\s*{.*}\s*\w+;',
        'CursorKind.ENUM_CONSTANT_DECL': r'\b\w+\s*=\s*\d+',
        'CursorKind.FUNCTION_DECL': r'\b\w+\s+\w+\s*\([^)]*\)',
        'CursorKind.TYPEDEF_DECL': r'\btypedef\s+\w+\s+\w+;',
        'CursorKind.FUNCTION_TEMPLATE': r'\btemplate\s*<.*>\s*\w+\s+\w+\s*\([^)]*\)',
        'CursorKind.CLASS_TEMPLATE': r'\btemplate\s*<.*>\s*class\s+\w+',
        'CursorKind.CLASS_TEMPLATE_PARTIAL_SPECIALIZATION': r'\btemplate\s*<.*>\s*class\s+\w+\s*<.*>',

        # basic operators
        'CursorKind.VAR_DECL': r'\b(?:const\s+)?\w+\s*[*&]?\s+\w+(\[\w*\])?\s*(=\s*({.*}|\[.*\]|".*"|\'.*\'|.*))?;',
        'CursorKind.COMPOUND_ASSIGNMENT_OPERATOR': r'.*\b\w+\s*[\+\-\*/%&|^]=.*',
        'CursorKind.CALL_EXPR': r'(?<!\=\s)(\b\w+)\((.*?)\)',
        'CursorKind.POINTER_VAR_DECL': r'\b\w+\s+\*?\s*\w+\s*(=\s*\.\.\.)?\s*;',
        'CursorKind.OTHER_LABEL': r'\b\w+:\s*',
        'CursorKind.ASSIGNMENT_OPERATOR': r'.*=.*'
    }

    for kind, pattern in patterns.items():
        if re.search(pattern, line, re.IGNORECASE):
            return kind

    return "CursorKind.UNEXPOSED_EXPR"  # Default kind if no specific pattern matches

# Example usage:
"""code_lines = [
    "printf(\"Hello, World!\");",
    "int x;",
    "char c = 'a';",
    "float pi = 3.14f;",
    "x = 10;",
    "bool isActive = true;",
    "nullptr;",
    "        if (i > 1)",
    "x *= 2;",
    "int array[] = {1, 2, 3};",
    "char letter = letters[2];",
    "(x > y) ? x : y",
    "static_cast<int>(3.14)",
    "@\"Objective-C String Literal\"",
    "[this] (int a, int b) { return a + b; }",  # Lambda expression
    "__null",  # GNU null extension
    "@protocol(MyProtocol)",  # Objective-C protocol expression
    "YES",  # Objective-C BOOL literal
    "throw 20",  # C++ throw expression
    "new int[5]",  # C++ new expression
    "delete pointer",  # C++ delete expression
    "struct MyStruct",
    "union MyUnion",
    "class MyClass",
    "enum MyEnum",
    "struct Data { int a; float b; } myData;",
    "enum Color { RED = 1, GREEN, BLUE };",
    "int add(int a, int b)",
    "int myVariable = 42;",
    "void func(int parameter)"
]"""
code_lines = """
 MpegEncContext *s = avctx->priv_data;
     /* MPEG-4 Studio Profile only, not supported by hardware */
     if (avctx->bits_per_raw_sample > 8) {
        av_assert1(avctx->profile == FF_PROFILE_MPEG4_SIMPLE_STUDIO);
        av_assert1(s->studio_profile);
        return avctx->pix_fmt;
}

"""

for line in code_lines.split('\n'):
    if not line.strip():
        continue
    elif line.startswith('#'):
        continue
    # elif "," in line:
    #     for subline in line.split(","):
    #         print(f"Line: '{line}' -> {identify_cursor_kind(line)}")
    else:
        print(f"Line: '{line}' -> {identify_cursor_kind(line)}")
