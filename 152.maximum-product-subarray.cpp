// @leet start
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
  int maxProduct(vector<int> &nums) {
    int minim = nums[0];
    int maxim = nums[0];
    int answer = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
      if (nums[i] < 0) {
        swap(maxim, minim);
      }
      maxim = max(nums[i], nums[i] * maxim);
      minim = min(nums[i], nums[i] * minim);
      answer = max(answer, maxim);
    }
    return answer;
  }
};
// @leet end
