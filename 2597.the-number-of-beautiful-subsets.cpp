// @leet start
#include <bitset>
#include <cmath>
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
  int beautifulSubsets(vector<int> &nums, int k) {
  int answer = 0;
  int length = 1 << nums.size();     // Total number of subsets, 2^nums.size()
  for (int i = 1; i < length; i++) { // Start from 1 to skip the empty subset
    vector<int> subarray;
    bool beautiful = true;
    for (int n = 0; n < nums.size(); n++) {
      if (i & (1 << n)) { // Check if the nth element is in the current subset
        // Check current element against all already chosen elements in the
        // subset
        for (int elem : subarray) {
          if (abs(nums[n] - elem) == k) {
            beautiful = false;
            break;
          }
        }
        if (!beautiful)
          break; // No need to process further if subset is not beautiful
        subarray.push_back(nums[n]);
      }
    }
    if (beautiful) {
      answer++; // Count the subset only if it is beautiful
    }
  }
  return answer;
  }
};
// @leet end
