// @leet start
#include <algorithm>
#include <vector>
using namespace std;
class Solution {
public:
	int lis(vector<int>nums, int size){
		int lis[size];
		lis[0]=1;
		for (int i = 1; i < size; i++) {
			lis[i]=1;
			for (int k = 0; k < i; k++) {
				if (nums[i] > nums[k] && lis[i] < lis[k]+1) {
					lis[i] = lis[k]+1;
				}
			}
		}
		
		return *max_element(lis,lis+size) ;

	};

  int lengthOfLIS(vector<int> &nums) {
		int maxim=1;
		lis(nums, nums.size());
		return maxim;
  }
	
};

// @leet end
