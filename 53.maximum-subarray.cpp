// @leet start
#include <algorithm>
#include <vector>
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    int maxHere = nums[0];
    int maxAnswer = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      maxHere = std::max(nums[i], maxHere + nums[i]);
      maxAnswer = std::max(maxHere, maxAnswer);
    }
		return maxAnswer;
  }
};
// @leet end
