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
	let previous = null;
	let current = head;
	while (current) {
		let next= current.next;
		current.next=previous
		previous=current
		current=next
	}
	return previous;
    
}
// @leet end
