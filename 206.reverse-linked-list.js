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
 * @return {ListNode}
 */
var reverseList = function(head) {
	var prev = null
	var next = null
	while(head){
		next= head.next
		head.next= prev
		prev = head
		head = next
	}
	return prev
};
// @leet end
