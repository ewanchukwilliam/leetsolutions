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
  ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
    ListNode *head = new ListNode();
    ListNode *cur = head;
    int carry = 0;
    for (; l1 != nullptr || l2 != nullptr;
         l1 = l1 == nullptr ? nullptr : l1->next,
         l2 = l2 == nullptr ? nullptr : l2->next) {
      int sum =
          (l1 == nullptr ? 0 : l1->val) + (l2 == nullptr ? 0 : l2->val) + carry;
      carry = sum / 10;
      cur->next = new ListNode(sum % 10);
      cur = cur->next;
    }
    if (carry > 0) {
      cur->next = new ListNode(carry);
    }
    return head->next;
  }
};
// @leet end
