# @leet start
# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        fast = head
        slow = head
        i = 0
        while fast is not None:
            fast = fast.next
            if i > n:
                slow = slow.next
            else:
                i += 1
        if i == n:
            return head.next
        if slow.next is not None:
            slow.next = slow.next.next
        else:
            slow.next = None
        return head


# @leet end
