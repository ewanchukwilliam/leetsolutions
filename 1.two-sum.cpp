// @leet start
class Solution {
public:
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> numMap; // {number: index}
    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      // Check if the complement exists in the map
      if (numMap.find(complement) != numMap.end()) {
        return {numMap[complement], i};
      }
      // Store the index of the current number
      numMap[nums[i]] = i;
    }
    return {}; // As per problem statement, this line will never be reached
  }
};
// @leet end
