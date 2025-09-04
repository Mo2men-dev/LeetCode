int string_length(const char *s) {
  int len = 0;
  while (s[len] != '\0') {
    len++;
  }
  return len;
}

int lengthOfLastWord(char *s) {
  int flag = 0;
  int l = string_length(s) - 1;

  while (l >= 0) {
    if (s[l] == ' ' && flag != 0) break;
    if (s[l] != ' ' && flag == 0) flag = l;
    l--;
  }

  return flag - l;
}
