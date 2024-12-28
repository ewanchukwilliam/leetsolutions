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
		ListNode *dummy = answer;
        int i = 0;
        while (dummy) {
            if (i == n - 1 && dummy->next) {
                dummy->next = dummy->next->next;
            } else if (i == n - 1) {
                dummy->next = nullptr;
            } else {
                dummy = dummy->next;
            }
            i++;
        }
        return reverse(answer->next);
    };
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
