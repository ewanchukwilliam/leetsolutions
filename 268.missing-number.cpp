// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  int missingNumber(vector<int> &nums) {
    int answer = 0;
		for (int i = 1; i <=nums.size(); i++) {
			answer = answer ^ i;
		}
		for (int i =0; i < nums.size(); i++) {
			answer = answer^nums[i];
		}
    return answer;
		
  }
};
// @leet end
