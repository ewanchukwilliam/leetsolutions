// @leet start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
/* struct ListNode { */
/*     int val; */
/*     struct ListNode *next; */
/* }; */

struct ListNode *removeNthFromEnd(struct ListNode *head, int n) {
  struct ListNode *answer = head;
  struct ListNode *remove = head;
  int i = 0;
  while (answer) {
    answer = answer->next;
    if (i > n) {
      remove = remove->next;
    }else{
		i++;
		}
  }
	if (i==n) {
		return head->next;
	}
	if (remove->next) {
		remove->next= remove->next->next;
	}else{
		remove->next=NULL;
	}
	return head;
}

// @leet end
