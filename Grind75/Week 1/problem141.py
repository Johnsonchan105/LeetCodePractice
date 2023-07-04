# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, x):
#         self.val = x
#         self.next = None

class Solution(object):
    def hasCycle(self, head):
        """
        :type head: ListNode
        :rtype: bool
        """
        node = {}
        while head != None:
            if id(head) in node:
                return True
            node[id(head)] = True
            head = head.next
        return False