// @leet start
/**
 * @param {number[]} nums1
 * @param {number[]} nums2
 * @return {number}
 */
function findMedianSortedArrays(nums1, nums2) {
	var answer = nums1.concat(nums2);
	answer.sort((a, b) => a - b);
	var median = Math.floor(answer.length / 2);
	if (answer.length % 2 === 0) {
		return (answer[median - 1] + answer[median]) / 2;
	} else {
		return answer[median];
	}
}

// @leet end
