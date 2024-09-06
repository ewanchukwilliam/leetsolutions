// @leet start
#include <algorithm>
#include <cstdint>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
  vector<string> commonChars(vector<string> &words) {
    vector<string> answer;
    vector<int> commons(26,INT_MAX);
    for (const string &word : words) {
      vector<int> ccount(26);
      for (const char &letter : word) {
        ccount[letter - 'a']++;
      }
      for (int i = 0; i < 26; i++) {
        commons[i] = min(commons[i], ccount[i]);
      }
    }
    for (int i = 0; i < 26; i++) {
      for (int n = 0; n < commons[i]; n++) {
        answer.push_back(string(1, i + 'a'));
      }
    }
    return answer;
  }
};
;
// @leet end
