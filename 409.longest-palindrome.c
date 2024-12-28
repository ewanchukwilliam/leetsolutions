
int longestPalindrome(char *s) {
  int map[52] = {0};
  for (int i = 0; s[i] != '\0'; i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      map[s[i] - 'a']++;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      map[s[i] - 'A' + 26]++;
    }
  }
  int ans = 0;
  bool hasOdd = false;
  for (int i = 0; i < 52; i++) {
    ans += map[i] / 2 * 2;
    if (map[i] % 2 == 1) {
      hasOdd = true;
    }
  }
  return ans + hasOdd;
}
