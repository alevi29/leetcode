# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def pairSum(self, head):
        """
        :type head: Optional[ListNode]
        :rtype: int
        """
        nums = []
        maxPair = 0
        while head:
            nums.append(head.val)
            head = head.next
        for i in range(len(nums) / 2):
            maxPair = max(maxPair, nums[i] + nums[len(nums) - i - 1])
        return maxPair