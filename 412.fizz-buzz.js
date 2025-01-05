// @leet start
/**
 * @param {number} n
 * @return {string[]}
 */
var fizzBuzz = function(n) {
	let res = [];
	for (let i = 1; i <= n; i++) {
		let str = "";
		if (i % 3 === 0) {
			str += "Fizz";
		}
		if (i % 5 === 0) {
			str += "Buzz";
		}
		if (str === "") {
			str += i;
		}
		res.push(str);
	}
	return res;
};
// @leet end
