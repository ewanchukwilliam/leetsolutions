// @leet start
/**
 * @param {number[]} nums
 * @return {number[]}
 */
var productExceptSelf = function (nums) {
  var forward = [];
  var backward = [];
  var forw = 1;
  var back = 1;
  for (let i = 0; i < nums.length; i++) {
    forward.push(forw);
    backward.push(back);
    forw *= nums[i];
    back *= nums[nums.length - 1 - i];
  }
  var answer = [];
  for (let i = 0; i < forward.length; i++) {
    answer.push(forward[i] * backward[backward.length - 1 - i]);
  }
  return answer;
};
// @leet end
