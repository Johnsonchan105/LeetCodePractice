class Solution(object):
    def plusOne(self, digits):
        """
        :type digits: List[int]
        :rtype: List[int]
        """
        if(digits[len(digits)-1] + 1 < 10):
            digits[len(digits)-1] = digits[len(digits)-1] + 1;
            return digits
        else:
            if(len(digits) == 1):
                digits[0] = 0
                digits.insert(0, 1)
                return digits
            i = len(digits) - 2
            while(True):
                digits[i+1] = 0
                if(i == 0 and (digits[0] + 1 == 10)):
                    digits[0] = 0
                    digits.insert(0, 1)
                    return digits
                if(digits[i] + 1 != 10):
                    digits[i] = digits[i] + 1
                    return digits
                i = i - 1
        return digits