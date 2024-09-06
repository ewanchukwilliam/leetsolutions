// @leet start
#include <string>
using namespace std;
class Solution {
public:
  int lengthOfLastWord(string s) {
    if (s.size() == 1) {
      return 1;
    }
    bool toggle = true;
    int count = 0;
    int i = s.size() - 1;
    while (toggle || s[i] != ' ') {
      if (s[i] != ' ') {
        toggle = false;
        count++;
      }
      i--;
      if (i < 0) {
        break;
      }
    }
    return count;
  }
};
// @leet end
