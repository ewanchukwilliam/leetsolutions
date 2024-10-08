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
      int index = -1;
      int min = Integer.MAX_VALUE;
      for (int i = 0; i < lists.length; i++) {
        if (lists[i] != null && lists[i].val < min) {
          index = i;
          min = lists[i].val;
        }
      }
      if (index == -1) {
        break;
      }
      temp.next = lists[index];
      lists[index] = lists[index].next;
      temp = temp.next;
    }
    return answer.next;
  }
}
// @leet end
