class Solution(object):
    def romanToInt(self, s):
        """
        :type s: str
        :rtype: int
        """
        conv = {
            "I": 1,
            "V": 5,
            "X": 10,
            "L": 50,
            "C": 100,
            "D": 500,
            "M": 1000
        }
        val = 0
        skip = False
        for i in range(0, len(s)):
            if(skip):
                skip = False
                continue
            if(i + 1 < len(s)):
                if(conv[s[i+1]] > conv[s[i]]):
                    num = conv[s[i+1]] - conv[s[i]]
                    val += num
                    skip = True
                else:
                    val += conv[s[i]]
            else:
                val += conv[s[i]]
        return val