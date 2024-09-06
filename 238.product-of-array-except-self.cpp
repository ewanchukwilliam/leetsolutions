// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  vector<int> productExceptSelf(vector<int> &nums) {
    vector<int> answer;
		int prod=1;
    answer.push_back(1);
    for (int i = 0; i < nums.size() - 1; i++) {
      prod *= nums[i];
      answer.push_back(prod);
    }
		prod=1;
    for (int i = nums.size() - 1; i > 0; i--) {
      prod *= nums[i];
			answer[i-1] *= prod;
    }
    return answer;
  }
};
// @leet end
