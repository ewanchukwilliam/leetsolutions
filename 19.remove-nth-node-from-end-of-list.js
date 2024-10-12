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
	var fast = head;
	var slow = head;
	var i = 0;
	while (fast) {
		fast=fast.next;
		if (i>n) {
			slow=slow.next;
		}
		i++;
	}
	if (i===n) {
		return head.next;
	}
	if (slow.next) {
		slow.next=slow.next.next;
	}else{
		slow.next=null;
	}
	return head;
};
// } @leet end
