// @leet start
#include <climits>
#include <cstdlib>
#include <vector>
using namespace std;
class Solution {
public:
  long long maximumValueSum(vector<int> &nums, int k,
                            vector<vector<int>> &edges) {
		long long answer=0;
		long long minloss=LLONG_MAX;
		int count=0;
		for (int i = 0; i < nums.size(); i++) {
			long long prev = nums[i];
			long long next = nums[i]^k;
			if (next>prev) {
				answer+=next;
				count++;
			}else {
				answer+=prev;
			}
			minloss = min(minloss, abs(prev - next));
		}
		if (count%2==0) {
			return answer;
		}else {
			return answer-minloss;
		}
		return answer;
  }
};
// @leet end
