char get_opening_char(char c) {
  switch (c) {
  case ')': return '(';
  case ']': return '[';
  case '}': return '{';
  }
  return 0;
}
bool isValid(char *s) {
  int opened_i = 0;
  char *opened = malloc(strlen(s) + 1);

  for (int i = 0; i < strlen(s); i++) {
    if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
      opened[opened_i++] = s[i];
    } else {
      if (opened_i < 1) {
        free(opened);
        return false;
      }
      if (opened[opened_i - 1] == get_opening_char(s[i]))
        opened[opened_i--] = '\0';
      else {
        free(opened);
        return false;
      }
    }
  }

  if (opened_i > 0) {
    free(opened);
    return false;
  }
  return true;
}
