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
    ListNode *answer = new ListNode();
    answer->next = reverse(head);
    ListNode *temp = answer;
    for (int i = 1; i < n; i++) {
      temp = temp->next;
    }
    if (temp->next != nullptr) {
      temp->next = temp->next->next;
    } else {
      temp->next = nullptr;
    }
    return reverse(answer->next);
  }
  ListNode *reverse(ListNode *head) {
    ListNode *previous = nullptr;
    ListNode *next = nullptr;
    while (head) {
      next = head->next;
      head->next = previous;
      previous = head;
      head = next;
    }
    return previous;
  }
};
// @leet end
