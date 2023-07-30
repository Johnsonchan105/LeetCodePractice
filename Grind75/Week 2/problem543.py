# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution(object):
    def height(self, root, diameter):
        if not root:
            return 0;
        left = self.height(root.left, self.diameter)
        right = self.height(root.right, self.diameter)
        self.diameter = max(self.diameter, left+right)
        return 1 + max(left, right)
    def diameterOfBinaryTree(self, root):
        """
        :type root: TreeNode
        :rtype: int
        """
        self.diameter = 0
        self.height(root, self.diameter)
        return self.diameter
        