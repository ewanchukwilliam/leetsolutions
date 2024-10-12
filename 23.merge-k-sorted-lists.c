// @leet start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
int smallestList(struct ListNode **lists, int listsSize) {
  int ind = -1;
  int min = INT_MAX;
  for (int i = 0; i < listsSize; i++) {
    if (lists[i] && lists[i]->val < min) {
      ind = i;
      min = lists[i]->val;
    }
  }
  return ind;
}
struct ListNode *mergeKLists(struct ListNode **lists, int listsSize) {
  struct ListNode *answer;
  int ind = smallestList(lists, listsSize);
  if (ind == -1) {
    return NULL;
  }
  answer = lists[ind];
  lists[ind] = lists[ind]->next;
  struct ListNode *temp = answer;
  while (true) {
    ind = smallestList(lists, listsSize);
    if (ind == -1) {
      break;
    }
    temp->next = lists[ind];
    lists[ind] = lists[ind]->next;
    temp = temp->next;
  }
  return answer;
}
// @leet end
