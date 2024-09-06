// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
		vector<int>answer;
		answer.push_back(nums[0]);
		for (int i = 0; i < nums.size()-1; i++) {
			if(nums[i]!=nums[i+1]){
				answer.push_back(nums[i+1]);
			}
		}
		nums=answer;
    return answer.size();
  }
};
// @leet end
