class Solution(object):
    def reverseList(self, head):
        """
        :type head: ListNode
        :rtype: ListNode
        """
        if not head or not head.next:
            return head
        tail = ListNode(head.val)
        head = head.next
        while head.next:
            temp = head
            tempNext = head.next
            head.next = tail
            tail = temp
            head = tempNext
        head.next = tail
        return head