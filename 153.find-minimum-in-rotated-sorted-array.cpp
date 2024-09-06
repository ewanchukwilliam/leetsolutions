// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  int findMin(vector<int> &nums) {
		int left=0;
		int right=nums.size()-1;
		while (left<right) {
			if (nums[left + (right-left)/2] <nums[right]) {
				right=left + (right-left)/2;
			}
			else {
				left=left + (right-left)/2 +1;	
			}
		}
		return nums[left];
  }
};
// @leet end
