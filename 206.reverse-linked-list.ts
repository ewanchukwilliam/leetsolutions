// @leet start
/**
 * Definition for singly-linked list.
 * class ListNode {
 *     val: number
 *     next: ListNode | null
 *     constructor(val?: number, next?: ListNode | null) {
 *         this.val = (val===undefined ? 0 : val)
 *         this.next = (next===undefined ? null : next)
 *     }
 * }
 */

function reverseList(head: ListNode | null): ListNode | null {
	let previous=null;
	let next=null;
	while (head!==null) {
		next=head.next;
		head.next=previous;
		previous=head;
		head=next;
	}
	return previous;
    
};
// @leet end
