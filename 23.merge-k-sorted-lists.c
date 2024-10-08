// @leet start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int findmin(struct ListNode **lists, int size) {
  int index = -1;
  int min = INT_MAX;
  for (int i = 0; i < size; i++) {
    if (lists[i] && lists[i]->val < min) {
      index = i;
      min = lists[i]->val;
    }
  }
  return index;
}
struct ListNode *mergeKLists(struct ListNode **lists, int listsSize) {
  int index = findmin(lists, listsSize);
  if (index == -1) {
    return NULL;
  }
  struct ListNode *answer = lists[index];
  struct ListNode *temp = answer;
  lists[index] = lists[index]->next;
  while (true) {
    index = findmin(lists, listsSize);
    if (index == -1)
      break;
    temp->next = lists[index];
    temp = temp->next;
    lists[index] = lists[index]->next;
  }
  return answer;
}
// @leet end
