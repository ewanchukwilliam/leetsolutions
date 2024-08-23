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
    ListNode *slow = head;
    ListNode *fast = head;
    while (fast != nullptr && fast->next != nullptr) {
      slow = slow->next;
      fast = fast->next->next;
    }
    ListNode *farSide = slow->next;
    slow->next = nullptr;
    farSide = reverse(farSide);

    ListNode *answer = new ListNode();
    ListNode *temp = answer;
    while (head || farSide) {
      if (head) {
        temp->next = head;
        head = head->next;
        temp = temp->next;
      }
      if (farSide) {
        temp->next = farSide;
        farSide = farSide->next;
        temp = temp->next;
      }
    }
    head = answer->next;
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
