class Solution(object):
    def removeDuplicates(self, nums):
        """
        :type nums: List[int]
        :rtype: int
        """
        s = sorted(set(nums))
        nums[:] = s
        return len(s)
        