// @leet start
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> singleNumber(vector<int> &nums) {
    unordered_map<int, int> maps;
    int a = 0;
    int b = 0;
    for (int i = 0; i < nums.size(); i++) {
      if (maps.find(nums[i]) == maps.end()) {
        maps[nums[i]] = 1;
      } else {
        maps[nums[i]]++;
      }
    }
    int *ptr = nullptr;
    for (const auto &number : maps) {
      if (number.second == 1 && !ptr) {
        a = number.first;
        ptr = &a;
      } else if (number.second == 1) {
        b = number.first;
      }
    }
    return {a, b};
  }
};
// @leet end
