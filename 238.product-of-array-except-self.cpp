// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    int size = nums.size();
    vector<int> answer(size, 1);
    int left = 1;
    for (int i = 0; i < size; i++) {
      answer[i] = left;
      left *= nums[i];
    }
    int right = 1;
    for (int i = size - 1; i >= 0; i--) {
      answer[i] *= right;
      right *= nums[i];
    }
    return answer;
  }
};
// @leet end
