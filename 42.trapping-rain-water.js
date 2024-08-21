// @leet start
/**
 * @param {number[]} height
 * @return {number}
 */
var trap = function(height) {
	var max = 0;
	let maxInd = 0;

	for (let i = 0; i < height.length; i++) {
		var current = height[i];
		if (max < current) {
			max = current;
			maxInd = i;
		}
	}

	let l = 0, lmax = l, ltrap = 0;
	let r = height.length - 1, rmax = r;
	let rtrap = 0;
	let answer = 0;

	while (l !== maxInd || r !== maxInd) {
		if (height[l] < height[lmax]) {
			ltrap += height[lmax] - height[l];
		} else {
			lmax = l;
			answer += ltrap;
			ltrap = 0;
		}
		if (height[r] < height[rmax]) {
			rtrap += height[rmax] - height[r];
		} else {
			rmax = r;
			answer += rtrap;
			rtrap = 0;
		}
		if (l < maxInd) {
			l++;
		}
		if (r > maxInd) {
			r--;
		}
	}
	answer += ltrap;
	answer += rtrap;
	return answer;
};
// @leet end
