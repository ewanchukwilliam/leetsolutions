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
 * @param {number} k
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
var reverseKGroup = function(head, k) {
	var dummy = new ListNode();
	dummy.next = head;
	var counter = 0;
	var answer = new ListNode();
	var ansTail = answer;
	var Head = new ListNode();
	var Tail = Head;
	while (dummy !== null) {
		Tail.next = dummy;
		dummy = dummy.next;
		Tail = Tail.next;
		if (counter % k === 0) {
			Tail.next = null;
			Head = reverse(Head.next);
			ansTail.next = Head;
			while (ansTail.next !== null) {
				ansTail = ansTail.next;
			}
			Head = new ListNode();
			Tail = Head;
			counter = 0;
		}
		counter++;
	}
	if (counter > 0) {
		ansTail.next = Head.next;
	}
	return answer.next.next;
};
// @leet end
