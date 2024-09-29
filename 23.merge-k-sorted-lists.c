// @leet start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

int findSmallest(struct ListNode **lists, int listsSize) {
  int index = -1;
  int smallest = INT_MAX;
  for (int i = 0; i < listsSize; i++) {
    if (lists[i] && lists[i]->val < smallest) {
      index = i;
      smallest = lists[i]->val;
    }
  }
  return index;
}

struct ListNode *mergeKLists(struct ListNode **lists, int listsSize) {
	if (listsSize ==0) {
		return NULL;
	}
  struct ListNode *answer;
  int index = findSmallest(lists, listsSize);
  if (index == -1) {
		return NULL;
  } else {
    answer = lists[index];
    lists[index] = lists[index]->next;
  }
  struct ListNode *temp = answer;

  while (true) {
    index = findSmallest(lists, listsSize);
    if (index >= 0) {
      temp->next = lists[index];
      lists[index] = lists[index]->next;
      temp = temp->next;
    } else {
      break;
    }
  }
  return answer;
}
// @leet end
