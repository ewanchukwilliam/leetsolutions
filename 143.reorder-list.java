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
  public void reorderList(ListNode head) {
    ListNode slow = head;
    ListNode fast = head;
    while (fast != null && fast.next != null) {
      slow = slow.next;
      fast = fast.next.next;
    }
    ListNode lower = slow.next;
    slow.next = null;
    lower = reverse(lower);
    while (head != null && lower != null) {
      ListNode temp = head.next;
      head.next = lower;
      lower = lower.next;
      head = head.next;
      head.next = temp;
      head = head.next;
    }
  }
  public ListNode reverse(ListNode head) {
    ListNode previous = null;
    ListNode next = null;
    while (head != null) {
      next = head.next;
      head.next = previous;
      previous = head;
      head = next;
    }
    return previous;
  }
}
// @leet end
