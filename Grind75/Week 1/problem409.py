class Solution(object):
    def longestPalindrome(self, s):
        """
        :type s: str
        :rtype: int
        """
        #rules: for every letter there must exist another one of the same letter
        #exception: except only 1 letter 
        longest = 0
        letters = {}
        for l in s:
            if l not in letters:
                letters[l] = 1
            else:
                letters[l] += 1
                if letters[l] == 2:
                    longest += 2
                    letters[l] = 0
        for i in letters:
            if letters[i] == 1:
                longest += 1
                break
        return longest