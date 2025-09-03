int string_length(const char *s) {
  int len = 0;
  while (s[len] != '\0') {
    len++;
  }
  return len;
}

int strStr(char* haystack, char* needle) {
  int needle_len = string_length(needle);
  int i = 0;
  while (haystack[i] != '\0') {
    int j = 0;
    while (needle[j] != '\0') {
      if (needle[j] == haystack[i]) {
        j++;
        i++;
      } else {
        i -= j;
        break;
      }
    }
    if (j == needle_len) {
      i -= j;
      break;
    }
    i++;
  }
  return i == string_length(haystack) ? -1 : i;
}
