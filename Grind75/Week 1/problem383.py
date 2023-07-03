class Solution(object):
    def canConstruct(self, ransomNote, magazine):
        """
        :type ransomNote: str
        :type magazine: str
        :rtype: bool
        """
        mag = {}
        note = {}
        if len(magazine) < len(ransomNote):
            return False

        for i in range(0, len(magazine)):
            if not (magazine[i] in mag):
                mag[magazine[i]] = 1
            else:
                mag[magazine[i]] += 1
            if i < len(ransomNote):
                if not (ransomNote[i] in note):
                    note[ransomNote[i]] = 1
                else:
                    note[ransomNote[i]] += 1
        for val in note:
            if val not in mag:
                return False
            if note[val] > mag[val]:
                return False
        return True