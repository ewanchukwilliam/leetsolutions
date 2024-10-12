// @leet start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
  ListNode *removeNthFromEnd(ListNode *head, int n) {
    ListNode *fast = head;
    ListNode *slow = head;
    int i = 0;
    while (fast) {
      fast = fast->next;
      if (i > n) {
        slow = slow->next;
      } else {
        i++;
      }
    }
    if (i == n) {
      return head->next;
    }
		slow->next = slow->next ? slow->next->next : nullptr;
    return head;
  }
};
// @leet end
