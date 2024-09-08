// @leet start
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxSubArray = function(nums) {
	var subarr = [];
	var temp = 0;
	for (let i = 0; i < nums.length; i++) {
		subarr.push(temp);
		temp += nums[i];
	}
	subarr.push(temp);
	var answer = -Infinity;
	var mindif = 0;
	for (let i = 1; i < subarr.length; i++) {
		answer = Math.max(answer, subarr[i] - mindif);
		mindif = Math.min(mindif, subarr[i]);
	}
	return answer;
};
// @leet end
