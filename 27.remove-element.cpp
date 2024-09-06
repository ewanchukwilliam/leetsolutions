// @leet start
#include <vector>
using namespace std;
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
		vector<int> dummy;
		for (int i = 0; i < nums.size(); i++) {
			if (nums[i] != val) {
				dummy.push_back(nums[i]);
			}	
		}
    nums=dummy;
		return nums.size();
    }
};
// @leet end
