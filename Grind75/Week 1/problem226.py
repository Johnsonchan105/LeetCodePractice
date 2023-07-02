# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def recurse(self, n):
        if n is None:
            return
        temp = n.left
        n.left = n.right
        n.right = temp
        self.recurse(n.left)
        self.recurse(n.right)
    def invertTree(self, root):
        """
        :type root: TreeNode
        :rtype: TreeNode
        """
        #we use recursion
        self.recurse(root)
        return root