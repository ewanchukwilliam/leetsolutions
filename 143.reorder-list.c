// @leet start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *reverse(struct ListNode *head) {
  struct ListNode *previous = NULL;
  struct ListNode *next = NULL;
  while (head) {
    next = head->next;
    head->next = previous;
    previous = head;
    head = next;
  }
  return previous;
}
void reorderList(struct ListNode *head) {
  struct ListNode *slow = head;
  struct ListNode *fast = head;
  while (fast && fast->next) {
    slow = slow->next;
    fast = fast->next->next;
  }
  struct ListNode *lower = slow->next;
  slow->next = NULL;
  lower = reverse(lower);
  while (head && lower) {
    struct ListNode *temp = head->next;
    head->next = lower;
    lower = lower->next;
    head = head->next;
    head->next = temp;
    head = head->next;
  }
}
// @leet end
