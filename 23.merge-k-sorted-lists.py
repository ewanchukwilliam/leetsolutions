# @leet start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeKLists(self, lists: List[Optional[ListNode]]) -> Optional[ListNode]:
        answer = ListNode()
        temp = answer
        while True:
            min = 10**4 + 1
            ind = -1
            for i in range(0, len(lists)):
                if lists[i] is not None and lists[i].val < min:
                    min = lists[i].val
                    ind = i
            if ind == -1:
                break
            temp.next = lists[ind]
            lists[ind] = lists[ind].next
            temp = temp.next
        return answer.next


# @leet end
