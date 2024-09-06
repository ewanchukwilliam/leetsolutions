// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  int specialArray(vector<int> &nums) {
		int count=0;
    for (int i = 1; i <= nums.size(); i++) {
       count = 0;
      for (int n = 0; n < nums.size(); n++) {
        if (nums[n] >= i) {
          count++;
        }
      }
      if (count == i) {
        return i;
      }
    }
    return -1;
  }
};
// @leet end
