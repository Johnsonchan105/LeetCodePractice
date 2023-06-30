class Solution(object):
    def isValid(self, s):
        """
        :type s: str
        :rtype: bool
        """
        pair = {
            ")" : "(",
            "}" : "{",
            "]" : "["
        }
        stack = []
        for i in s:
            if (i == "(") or (i == "{") or (i == "["):
                stack.append(i)
            else:
                if len(stack) == 0 or stack[-1] != pair[i]:
                    return False
                else:
                    stack.pop()
        if len(stack) != 0:
            return False
        return True
