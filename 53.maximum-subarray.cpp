// @leet start
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
  int maxSubArray(vector<int> &nums) {
    vector<int> subarr;
    int temp = 0;
    for (int i = 0; i < nums.size(); i++) {
      subarr.push_back(temp);
      temp += nums[i];
    }
    subarr.push_back(temp);
    int answer = INT_MIN;
    int mindif = 0;
    for (int i = 1; i < subarr.size(); i++) {
      answer = max(answer, subarr[i] - mindif);
      mindif = min(mindif, subarr[i]);
    }
    return answer;
  }
};
// @leet end
