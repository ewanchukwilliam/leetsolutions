// @leet start
/**
 * @param {number[]} nums
 * @return {number}
 */
var maxProduct = function (nums) {
  var tempmax = nums[0];
  var tempmin = nums[0];
  var answer = nums[0];
  for (let i = 1; i < nums.length; i++) {
    var num = nums[i];
    var temp = Max(num, num * tempmax, num * tempmin);
    tempmin = Min(num, num * tempmax, num * tempmin);
    tempmax = temp;
    answer = Math.max(answer, tempmax);
  }
  return answer;
};
var Max = function (a, b, c) {
  var max = a;
  if (max < b) max = b;
  if (max < c) max = c;
  return max;
};
var Min = function (a, b, c) {
  var min = a;
  if (min > b) min = b;
  if (min > c) min = c;
  return min;
};
// @leet end
