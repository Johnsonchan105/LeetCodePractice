class Solution(object):
    def containsDuplicate(self, nums):
        """
        :type nums: List[int]
        :rtype: bool
        """
        dup = {}
        for i in nums:
            if i in dup:
                return True
            else:
                dup[i] = 1
        return False