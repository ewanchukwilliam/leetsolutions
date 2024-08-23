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
#include <climits>
#include <list>
class Solution {
public:
  ListNode *mergeKLists(vector<ListNode *> &lists) {
    ListNode *answer = new ListNode(0);
    ListNode *temp = answer;
    while (true) {
      int index = -1;
      int min = INT_MAX;
      for (int i = 0; i < lists.size(); i++) {
        if (lists[i] != nullptr && lists[i]->val < min) {
          min = lists[i]->val;
          index = i;
        }
      }
      if (index == -1)
        break;
      temp->next = lists[index];
      lists[index] = lists[index]->next;
      temp = temp->next;
    }
    return answer->next;
  }
};
// @leet end
