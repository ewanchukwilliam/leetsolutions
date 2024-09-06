// @leet start
#include <cstdlib>
#include <unordered_set>
#include <vector>
using namespace std;
class Solution {
public:
  bool containsNearbyDuplicate(vector<int> &nums, int k) {
    unordered_set<int> dict;
    for (int i = 0; i < nums.size(); i++) {
      if (!dict.insert(nums[i]).second) {
        if (i - k < 0) {
          for (int n = 0; n < i; n++) {
            if (nums[n] == nums[i] && abs(i-n)<=k) {
              return true;
            }
          }
        } else {
          for (int n = i-k; n < i; n++) {
            if (nums[n] == nums[i]) {
              return true;
            }
          }
        }
      }
    }
    return false;
  }
};
// @leet end
