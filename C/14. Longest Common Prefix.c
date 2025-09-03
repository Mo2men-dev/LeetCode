char *longestCommonPrefix(char **strs, int strsSize) {
  char *prefix = malloc(strlen(strs[0]) * sizeof(char) + 1);
  strcpy(prefix, strs[0]);

  for (int i = 1; i < strsSize; i++) {
    char *curr_str = strs[i];
    int len = strlen(prefix);
    // if the prefix length reaches 0 we return
    if (len < 1) break;

    for (int j = 0; j < len; j++) {
      if (prefix[j] && curr_str[j]) {
        if (prefix[j] == curr_str[j]) continue;
        else {
          prefix[j] = '\0';
          break;
        }
      } else {
        prefix[j] = '\0';
        break;
      }
    }
  }

  return prefix;
}
