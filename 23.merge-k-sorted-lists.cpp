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
  ListNode *mergeKLists(vector<ListNode *> &lists) {
    ListNode *answer = new ListNode();
    ListNode *temp = answer;
    while (true) {
      int index = -1;
      int min = INT_MAX;
      for (int i = 0; i < lists.size(); i++) {
        if (lists[i] && lists[i]->val < min) {
          index = i;
          min = lists[i]->val;
        }
      }
      if (index == -1) {
        break;
      }
			temp->next=lists[index];
			temp=temp->next;
			lists[index]=lists[index]->next;
    }
		return answer->next;
  }
};
// @leet end
