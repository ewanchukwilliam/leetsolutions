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
	var fast = head;
	var slow = head;
	while (fast !== null && fast.next !== null) {
		slow = slow.next;
		fast = fast.next.next;
	}
	var farside = slow.next;
	slow.next = null;
	farside = reverse(farside);
	var answer = new ListNode();
	var temp = answer;
	while (farside !== null || head !== null) {
		if (head) {
			temp.next = head;
			head = head.next;
			temp = temp.next;
		}
		if (farside) {
			temp.next = farside;
			farside = farside.next;
			temp = temp.next;
		}
	}
	return answer.next;
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
