
class Solution {
  public:
    vector<vector<int>> threeSum(vector<int> &nums) {
        vector<vector<int>> answer;
        if (nums.size() < 3)
            return answer;
        sort(nums.begin(), nums.end());
        if (nums.back() < 0)
            return answer;
        for (int i = 0; i < nums.size() - 2; i++) {
            if (nums[i] > 0)
                break;
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int n = i + 1;
            int m = nums.size() - 1;
            while (n < m) {
                int sum = nums[i] + nums[n] + nums[m];
                if (sum == 0) {
                    answer.push_back({nums[i], nums[n], nums[m]});
                    while (n < m && nums[n] == nums[n + 1])
                        n++;
                    while (n < m && nums[m] == nums[m - 1])
                        m--;
                    n++;
                    m--;
                } else if (sum < 0)
                    n++;
                else
                    m--;
            }
        }
        return answer;
    }
};
