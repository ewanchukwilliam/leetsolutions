// @leet start
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_map<int, bool> map;
    for (int i = 0; i < nums.size(); i++) {
      if (map.find(nums[i]) == map.end) {
        map[nums[i]] = true;
      } else {
        return true;
      }
    }
    return false;
  }
};
// @leet end
