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
      int ind = -1;
      int min = INT_MAX;
      for (int i = 0; i < lists.size(); i++) {
        if (lists[i] && lists[i]->val < min) {
          ind = i;
          min = lists[i]->val;
        }
      }
      if (ind == -1) {
        break;
      }
      temp->next = lists[ind];
      lists[ind] = lists[ind]->next;
      temp = temp->next;
    }
    return answer->next;
  }
};
// @leet end
