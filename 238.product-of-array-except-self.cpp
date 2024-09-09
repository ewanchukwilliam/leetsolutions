// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> forward;
    vector<int> reverse;
    int forw = 1;
    int back = 1;
    for (int i = 0; i < nums.size() - 1; i++) {
      forward.push_back(forw);
      reverse.push_back(back);
      forw *= nums[i];
      back *= nums[nums.size() - 1 - i];
    }
    forward.push_back(forw);
    reverse.push_back(back);
    vector<int> answer;
    for (int i = 0; i < forward.size(); i++) {
      answer.push_back(forward[i] * reverse[reverse.size() - 1 - i]);
    }
    return answer;
  }
};
// @leet end
