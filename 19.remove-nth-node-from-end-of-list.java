// @leet start
/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode removeNthFromEnd(ListNode head, int n) {
		ListNode fast = head;
		ListNode slow = head;
		int i=0;
		while(fast!=null){
			fast=fast.next;
			if(i>n){
				slow=slow.next;
			}
			i++;
		}
		if(i==n)return head.next;
		slow.next=slow.next!=null?slow.next.next:null;
		return head;
    }
}
// @leet end
