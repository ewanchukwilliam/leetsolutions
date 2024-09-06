// @leet start
#include <algorithm>
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  bool containsDuplicate(vector<int> &nums) {
    unordered_map<int, int> maps;
		for (int i = 0; i < nums.size(); i++) {
    if (maps.find(nums[i])== maps.end()) {
				maps[nums[i]]=1;
    }else {
    	return false;
    }
			
		}
	return true;
  }
};
// @leet end
