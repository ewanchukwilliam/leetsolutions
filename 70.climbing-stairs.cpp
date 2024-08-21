// @leet start
#include <vector>
using namespace std;
class Solution {
public:
  int climbStairs(int n) {
		if(n==1) return n;
    vector<int> ans;
    ans.push_back(1);
    ans.push_back(2);
    for (int i = 2; i < n; i++) {
    ans.push_back(0);
    }
    for (int i = 2; i < ans.size(); i++) {
      ans[i] = ans[i - 1] + ans[i - 2];
    }
    return ans[ans.size() - 1];
  }
};
// @leet end
