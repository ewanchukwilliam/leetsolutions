# @leet start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: Optional[ListNode]) -> None:
        slow = head
        fast = head
        while fast is not None and fast.next is not None:
            slow = slow.next
            fast = fast.next.next
        farside = slow.next
        slow.next = None
        farside = self.reverse(farside)
        answer = ListNode()
        temp = answer
        while head is not None or farside is not None:
            if head is not None:
                temp.next = head
                head = head.next
                temp = temp.next
            if farside is not None:
                temp.next = farside
                farside = farside.next
                temp = temp.next
        return answer.next

    def reverse(self, head: Optional[ListNode]) -> None:
        previous = None
        next = None
        while head:
            next = head.next
            head.next = previous
            previous = head
            head = next
        return previous

        """
        Do not return anything, modify head in-place instead.
        """


# @leet end
