static bool str_is_nonascii(const char *str)
{
  size_t len = strlen(str);
  while(len--) {
    if(*str & 0x80)
      return TRUE;
    str++;
  }
  return FALSE;
}
