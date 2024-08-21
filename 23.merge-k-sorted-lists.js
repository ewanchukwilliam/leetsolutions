// @leet start
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode[]} lists
 * @return {ListNode}
 */
var mergeKLists = function(lists) {
	var answer = new ListNode();
	var temp = answer;
	var flag = true;
	while (flag) {
		flag = false;
		var min = Infinity;
		var index = -1;
		for (let i = 0; i < lists.length; i++) {
			const list = lists[i];
			if (list !== null && list.val < min) {
				flag = true;
				min = list.val;
				index = i;
			}
		}
		if (index !== -1) {
			temp.next = lists[index];
			lists[index] = lists[index].next;
			temp = temp.next;
		}
	}
	return answer.next;
};
// @leet end
