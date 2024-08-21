// @leet start
/**
 * @param {number} x
 * @return {number}
 */
var reverse = function(x) {
	var neg = false;
	if (x < 0) {
		neg = true;
	}
	let s = x.toString();
	var answer = "";
	for (let i = s.length - 1; i >= 0; i--) {
		const letter = s[i];
		answer += letter;
	}
	let number = parseInt(answer, 10);

	if (neg) {
		number *= -1;
	}
	if (number < -(2 ** 31) || number > 2 ** 31 - 1) {
		return 0;
	}
	return number;
};
// @leet end
