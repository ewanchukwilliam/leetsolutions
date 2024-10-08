// @leet start
#include <vector>
class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    std::vector<int> left;
    std::vector<int> right;
    int lefter = 1;
    int righter = 1;
    for (int i = 0; i < nums.size(); i++) {
      left.push_back(lefter);
      right.push_back(righter);
      lefter *= nums[i];
      righter *= nums[nums.size() - i - 1];
    }
    std::vector<int> answer;
    for (int i = 0; i < nums.size(); i++) {
      answer.push_back(left[i] * right[nums.size() - i - 1]);
    }
    return answer;
  }
};
// @leet end
