// @leet start
#include <algorithm>
class Solution {
public:
  int maxProduct(vector<int> &nums) {
    int minimum = nums[0];
    int maximum = nums[0];
    int answer = nums[0];
    for (int i = 1; i < nums.size(); i++) {
      int num = nums[i];
      int temp = std::min(num, std::min( num * maximum, num * minimum ));
      maximum = std::max(num, std::max( num * maximum, num * minimum ));
      minimum = temp;
      answer = std::max(answer, maximum);
    }
    return answer;
  }
};
// @leet end
