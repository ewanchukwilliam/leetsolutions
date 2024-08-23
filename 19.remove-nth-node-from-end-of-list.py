# @leet start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        answer = ListNode()
        answer.next = self.reverse(head)
        temp = answer
        for i in range(0, n-1):
            temp = temp.next
        if temp.next is not None:
            temp.next = temp.next.next
        else:
            temp.next = None
        return self.reverse(answer.next)

    def reverse(self, head: Optional[ListNode]) -> Optional[ListNode]:
        previous = None
        next = None
        while head:
            next = head.next
            head.next = previous
            previous = head
            head = next
        return previous


# @leet end
