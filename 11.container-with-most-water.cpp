// @leet start
#include <algorithm>
#include <climits>
#include <vector>
using namespace std;
class Solution {
public:
  int maxArea(vector<int> &height) {
    int l = 0;
    int r = height.size()-1;
    int answer = 0;
    while (l < r) {
      answer = max(answer, (r - l) * min(height[l], height[r]) );
      if (height[l] < height[r]) {
        l++;
      }else {
      	r--;
      }
    }
		return answer;
  }
};
// @leet end
