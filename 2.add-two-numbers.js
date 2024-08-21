// @leet start
/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
// var reverse = function(head) {
// 	var previous = null;
// 	var next = null;
// 	while (head !== null) {
// 		next = head.next;
// 		head.next = previous;
// 		previous = head;
// 		head = next;
// 	}
// 	return previous;
// };

var addTwoNumbers = function(l1, l2) {
	var answer = new ListNode();
	var carry = 0;
	dummy = answer;
	while (l1 !== null && l2 !== null) {
		var total = l1.val + l2.val + carry;
		dummy.next = new ListNode(total % 10, null);
		carry = Math.floor(total / 10);
		dummy = dummy.next;
		l1 = l1.next;
		l2 = l2.next;
	}
	while(l1 !== null) {
		total = l1.val + carry;
		carry = Math.floor(total / 10);
		dummy.next = new ListNode(total % 10, null);
		dummy = dummy.next;
		l1 = l1.next;
	}
	while(l2 !== null) {
		total = l2.val + carry;
		carry = Math.floor(total / 10);
		dummy.next = new ListNode(total % 10, null);
		dummy = dummy.next;
		l2 = l2.next;
	}
	if (carry!==0) {
		dummy.next= new ListNode(carry,null)
		dummy= dummy.next
	}
	return answer.next;
};
// @leet end
