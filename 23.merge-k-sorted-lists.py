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
            index = -1
            min = inf
            for i in range(0, len(lists)):
                if lists[i] != None and lists[i].val < min:
                    index = i
                    min = lists[i].val
            if index == -1:
                break
            temp.next = lists[index]
            lists[index] = lists[index].next
            temp = temp.next
        return answer.next


# @leet end
