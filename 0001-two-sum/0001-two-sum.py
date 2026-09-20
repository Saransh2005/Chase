class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        mydict = {}
        for i in range(0,len(nums)):
            n = target - nums[i]
            if n in mydict:
                return [mydict[n],i]
            mydict[nums[i]] = i
        return []
        