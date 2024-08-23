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
var removeNthFromEnd = function(head, n) {
	var answer = new ListNode();
	answer.next = reverse(head);
	var temp = answer;
	for (let i = 0; i < n - 1; i++) {
		temp = temp.next;
	}
	if (temp.next !== null) {
		temp.next = temp.next.next;
	} else {
		temp.next = null;
	}
	return reverse(answer.next);
};
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
// } @leet end
