/**
 * Definition for singly-linked list.
 * function ListNode(val, next) {
 *     this.val = (val===undefined ? 0 : val)
 *     this.next = (next===undefined ? null : next)
 * }
 */
/**
 * @param {ListNode} head
 * @return {void} Do not return anything, modify head in-place instead.
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
var reorderList = function(head) {
	var slow = head;
	var fast = head;
	while (fast && fast.next !== null) {
		slow = slow.next;
		fast = fast.next.next;
	}
	var rev = slow.next;
	slow.next = null;
	rev = reverse(rev);
	var temp = head;
	while (temp !== null && rev !== null) {
		var tempNext = temp.next;
		var revNext = rev.next;
		temp.next = rev;
		rev.next = tempNext;
		temp = tempNext;
		rev = revNext;
	}
	return head;
};
