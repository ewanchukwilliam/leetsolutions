
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *removeNthFromEnd(struct ListNode *head, int n) {
    struct ListNode *slow = head;
    struct ListNode *fast = head;
    struct ListNode *prev = NULL;
    for (int i = 0; i < n; i++) {
        fast = fast->next;
    }
    while (fast) {
        prev = slow;
        slow = slow->next;
        fast = fast->next;
    }
    if (prev) {
        prev->next = slow->next;
    } else {
        head = head->next;
    }
    return head;
}
