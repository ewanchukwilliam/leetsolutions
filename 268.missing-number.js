// @leet start
/**
 * @param {number[]} nums
 * @return {number}
 */
var missingNumber = function(nums) {
	let n = nums.length;
	let answer = (n * (n + 1)) / 2 - sum(nums);
	return answer;
};
var sum = function(n) {
	let total = 0;
	for (let i = 0; i < n.length; i++) {
		total += n[i];
	}
	return total;
}
// @leet end
