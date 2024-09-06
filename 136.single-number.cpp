// @leet start
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
		int answer=0;
		int saved=0;
		unordered_map<int, int> mappings;

		for (int i = 0; i < nums.size(); i++) {
			if (mappings.find(nums[i])==mappings.end()) {
			 	mappings[nums[i]] = 1;		
			}
			else {
			 	mappings[nums[i]] = 2;		
			}
		}
		for (int i = 0; i < nums.size(); i++) {
			if (mappings[nums[i]]==1) {
				return nums[i];
			}
		}
  	return 0; 
    }
};
// @leet end
