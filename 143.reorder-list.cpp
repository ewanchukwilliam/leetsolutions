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
  void reorderList(ListNode *head) {
    ListNode *fast = head;
    ListNode *slow = head;
    while (fast && fast->next) {
      slow = slow->next;
      fast = fast->next->next;
    }
    ListNode *lower = slow->next;
    slow->next = nullptr;
    lower = reverse(lower);
    while (head && lower) {
      ListNode *temp = head->next;
      head->next = lower;
      lower = lower->next;
			head=head->next;
			head->next=temp;
			head=head->next;
    }
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
