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
	var previous = null;
	var next = null;
	while (head) {
		next = head.next;
		head.next = previous;
		previous = head;
		head = next;
	}
	return previous;
};
var removeNthFromEnd = function(head, n) {
	let answer = reverse(head);
	let dummy = new ListNode();
	dummy.next = answer;
	if (n === 1) {
		dummy = dummy.next;
		return reverse(dummy.next);
	}
	for (let i = 0; i < n - 1; i++) {
		dummy = dummy.next;
	}
	if (dummy.next !== null) {
		dummy.next = dummy.next.next;
	}
	return reverse(answer);
};
// @leet end
