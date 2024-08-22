// @leet start
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} n
 * @return {ListNode}
 */
var reverse = function(head) {
	var prev = null;
	var next = null;
	while (head) {
		next = head.next;
		head.next = prev;
		prev = head;
		head = next;
	}
	return prev;
};
var removeNthFromEnd = function(head, n) {
	var ans = new ListNode();
	ans.next = reverse(head);
	var temp = ans;
	for (let i = 1; i < n; i++) {
		temp = temp.next;
	}
	if (temp.next !== null) {
		temp.next = temp.next.next;
	} else {
		temp.next = null;
	}
	return reverse(ans.next);
};
// } @leet end
