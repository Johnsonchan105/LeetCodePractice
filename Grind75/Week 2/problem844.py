class Solution(object):
    def backSpace(self, s):
        stack = []
        for l in s:
            if l == "#":
                if len(stack) != 0:
                    stack.pop()
            else:
                stack.append(l)
        return stack
    def backspaceCompare(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        return self.backSpace(s) == self.backSpace(t)