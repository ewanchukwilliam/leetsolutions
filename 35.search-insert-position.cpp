// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  int searchInsert(vector<int> &nums, int target) {
    int left = 0;
		if (nums[0]>=target) {
			return 0;
		}
    int right = nums.size();
    int index = right / 2;
    while (right!=index && left!=index) {
      if (nums[index] == target) {
        return index;
      } else if (target > nums[index]) {
        left = index;
        index = (right - left) / 2 +left;
      } else {
        right = index;
        index = (right - left) / 2 +left;
      }
    }
    return index+1;
  }
};
// @leet end
