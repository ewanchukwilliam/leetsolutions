// @leet start
class Solution {
    public int trap(int[] height) {
		int l = 0, r = height.length - 1;
    int lmax = height[l], rmax = height[r];
    int answer = 0;
    while (l < r) {
      if (height[l] < height[r]) {
        if (height[l] >= lmax) {
          lmax = height[l];
        } else {
          answer += lmax - height[l];
        }
        ++l;
      } else {
        if (height[r] >= rmax) {
          rmax = height[r];
        } else {
          answer += rmax - height[r];
        }
        --r;
      }
    }
    return answer;


        
    }
}
// @leet end
