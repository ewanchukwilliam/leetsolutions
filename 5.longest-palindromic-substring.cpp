// @leet start
#include <string>
using namespace std;
class Solution {
public:
  bool ispal(string s, int start, int end) {
    while (start < end) {
      if (s[start] != s[end]) {
        return false;
      }
      start++;
      end--;
    };
    return true;
  }
  string longestPalindrome(string s) {
    if (s.size() <= 1) return s;
    string answer = string(1,s[0]);
    int maxlength = 0;
    for (int i = 0; i < s.size(); i++) {
      for (int j = i + 1; j < s.size(); j++) {
        if (s[j] == s[i] && j - i +1> maxlength) {
          if (ispal(s, i, j)) {
            answer = s.substr(i, j-i+1);
						maxlength = answer.size();
          }
        }
      }
    }
    return answer;
  }
};
// @leet end
