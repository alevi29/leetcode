# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def deleteMiddle(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        if not head.next: return None
        size = 0
        temp = head
        while temp:
            temp = temp.next
            size += 1
        
        temp = head
        for i in range((size / 2) - 1):
            temp = temp.next
        temp.next = temp.next.next
        return head
        