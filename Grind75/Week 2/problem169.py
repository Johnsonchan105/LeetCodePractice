class Solution(object):
    def majorityElement(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        num = {}
        for i in nums:
            if i not in num:
                num[i] = 1
            else:
                num[i] += 1
        a = 0
        b = 0
        for n in num:
            if num[n] >= len(nums)/2 and num[n] >= b:
                a = n
                b = num[n]
        return a