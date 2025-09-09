// @leet start
class Solution {
  public:
    int missingNumber(vector<int> &nums) {
        int answer = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
			answer ^= i ^ nums[i];
        }
        answer ^= n;
        return answer;
    }
};
// @leet end
