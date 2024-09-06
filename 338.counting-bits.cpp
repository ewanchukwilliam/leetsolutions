// @leet start

#include <vector>
using namespace std;
class Solution {
public:
  vector<int> countBits(int n) {
    vector<int> answer;
    for (int i = 0; i <= n; i++) {
      int count = 0;
      for (int j = 0; j < 32; j++) {
        int bit = (i >> j) & 1;
        if (bit == 1) {
          count++;
        }
      }
      answer.push_back(count);
    }
    return answer;
  }
};
// @leet end
