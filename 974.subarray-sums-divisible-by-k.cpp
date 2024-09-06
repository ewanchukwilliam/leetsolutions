// @leet start
#include <vector>
#include <vector>
using namespace std;
class Solution {
public:
  int subarraysDivByK(vector<int> &nums, int k) {
int answer = 0;
    int prefixSum = 0;
    unordered_map<int, int> countMod;
    countMod[0] = 1;
    for (int num : nums) {
        prefixSum += num;
        int mod = (prefixSum % k + k) % k;
        if (countMod.find(mod) != countMod.end()) {
            answer += countMod[mod];
        }
        countMod[mod]++;
    }
    return answer;
  }
};
// @leet end
