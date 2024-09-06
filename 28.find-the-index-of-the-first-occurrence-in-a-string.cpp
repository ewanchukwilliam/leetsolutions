// @leet start
#include <string>
using namespace std;
class Solution {
public:
  int strStr(string haystack, string needle) {
    int ans = -1;
    int n = 0;
    for (int i = 0; i < haystack.size(); i++) {
      n = 0;
      while (needle[n] == haystack[i + n]) {
        if (n + 1 == needle.size()) {
          return i;
        }
        n++;
      }
    }
    return ans;
  }
};
// @leet end
