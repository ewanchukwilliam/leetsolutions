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

/**
 Do not return anything, modify head in-place instead.
 */
function reorderList(head: ListNode | null): void {
	if (!head) {
		return;
	}
	const nodes = [];
	let node = head;
	while (node) {
		nodes.push(node);
		node = node.next;
	}
	let i = 0;
	let j = nodes.length - 1;
	while (i < j) {
		nodes[i].next = nodes[j];
		i++;
		if (i === j) {
			break;
		}
		nodes[j].next = nodes[i];
		j--;
	}
	nodes[i].next = null;
}
// @leet end
