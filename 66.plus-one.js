// @leet start
/**
 * @param {number[]} digits
 * @return {number[]}
 */
var plusOne = function(digits) {
	var carry = 1;
	for (let i = digits.length - 1; i >= 0; i--) {
		const num = digits[i];
		var current = carry + num;
		digits[i] = current % 10;
		if (current < 10) {
			carry = 0;
		} else {
			carry = 1;
		}
	}
	if (carry > 0) {
		digits.unshift(carry);
	}
	return digits;
};
// @leet end
