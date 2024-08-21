// @leet start
/**
 * @param {number[][]} intervals
 * @return {number[][]}
 */
var merge = function(intervals) {
	if (intervals.length === 1) {
		return intervals;
	}
	intervals.sort((a, b) => a[0] - b[0]);
	let cInt = intervals[0];
	let ans = [];
	for (let i = 1; i < intervals.length; i++) {
		if (intervals[i][0] <= cInt[1]) {
			cInt[1] = Math.max(cInt[1], intervals[i][1]);
		} else {
			ans.push(cInt);
			cInt = intervals[i];
		}
	}
	if (cInt !== intervals[intervals.lenth]) {
		ans.push(cInt);
	}
	return ans;
};
// @leet end
