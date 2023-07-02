class Solution(object):
    def isPalindrome(self, s):
        """
        :type s: str
        :rtype: bool
        """
        string = ""
        for i in s:
            if i.isalpha() or i.isnumeric():
                string += i.lower()
        for i in range(0, len(string)/2):
            #print(string[i], string[(-i-1)])
            if(string[i] != string[(-i-1)]):
                return False
        return True