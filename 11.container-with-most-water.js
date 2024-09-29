// @leet start
/**
 * @param {number[]} height
 * @return {number}
 */
var maxArea = function(height) {
	var l = 0;
	var r = height.length-1;
	var answer =0;
	while (l<r) {
		answer = Math.max(answer, (r-l)*Math.min(height[r],height[l]));
		if (height[l]<height[r]) {
			l++;
		}else {
			r--;
		}
	}
	return answer;
    
};
// @leet end
