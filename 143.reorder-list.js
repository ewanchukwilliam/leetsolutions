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
 * @return {void} Do not return anything, modify head in-place instead.
 */
var reorderList = function(head) {
	if (!head || !head.next) return;
	let slow = head,
		fast = head;
	while (fast.next && fast.next.next) {
		slow = slow.next;
		fast = fast.next.next;
	}
	let second = slow.next;
	slow.next = null; // Split the list into two halves
	let reversed = reverseList(second);
	combinelinked(head, reversed);
};
var reverseList = function(head) {
	let previous = null;
	let next = null;
	while (head) {
		next = head.next;
		head.next = previous;
		previous = head;
		head = next;
	}
	return previous;
};
var combinelinked = function(list1, list2) {
	while (list1 && list2) {
		let temp1 = list1.next;
		let temp2 = list2.next;
		list1.next = list2;
		list2.next = temp1; // Ensure the original end of the list1 half connects correctly
		list1 = temp1;
		list2 = temp2;
	}
};

// @leet end
