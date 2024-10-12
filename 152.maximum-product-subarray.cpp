// @leet start
#include <algorithm>
#include <vector>
class Solution {
public:
  int maxProduct(vector<int> &nums) {
    int maximum = nums[0];
    int minimum = nums[0];
    int answer = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      int temp =
          std::min(nums[i], std::min(nums[i] * maximum, nums[i] * minimum));

      maximum =
          std::max(nums[i], std::max(nums[i] * maximum, nums[i] * minimum));
			minimum = temp;
			answer = std::max(answer, maximum);
    }
		return answer;
  }
};
// @leet end
