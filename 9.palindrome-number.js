// @leet start
/**
 * @param {number} x
 * @return {boolean}
 */
var isPalindrome = function(x) {
	var string = x.toString();
	var left = 0;
	var right = string.length-1;
	while (left < right) {
		if (string[left]  !== string[right]) {
		return false	
		}
		left++;
		right--;
	}
	return true
};
// @leet end
