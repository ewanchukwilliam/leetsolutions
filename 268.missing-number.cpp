// @leet start
class Solution {
public:
    int missingNumber(vector<int>& nums) {
		return  nums.size() * (nums.size() + 1) / 2 - sum(nums);
    }
	int sum(vector<int>& nums) {
		int sum = 0;
		for (int i = 0; i < nums.size(); i++) {
			sum += nums[i];
		}
		return sum;
	}
};
// @leet end
