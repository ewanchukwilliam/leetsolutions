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
	while (true) {
		var ind = -1;
		var min = Infinity;
		for (let i = 0; i < lists.length; i++) {
			const list = lists[i];
			if (list && list.val < min) {
				ind = i;
				min = list.val;
			}
		}
		if (ind === -1) {
			break;
		}
		temp.next = lists[ind];
		lists[ind] = lists[ind].next;
		temp = temp.next;
	}
	return answer.next;
};
// @leet end
