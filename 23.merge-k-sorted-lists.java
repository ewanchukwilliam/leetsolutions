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
  public ListNode mergeKLists(ListNode[] lists) {
    ListNode answer = new ListNode();
    ListNode temp = answer;
    while (true) {
      int ind = -1;
      int min = Integer.MAX_VALUE;
      for (int i = 0; i < lists.length; i++) {
        if (lists[i] != null && lists[i].val < min) {
          ind = i;
          min = lists[i].val;
        }
      }
      if (ind == -1) {
        break;
      }
      temp.next = lists[ind];
      lists[ind] = lists[ind].next;
      temp = temp.next;
    }
    return answer.next;
  }
}
// @leet end
