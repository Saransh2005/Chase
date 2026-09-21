class Solution(object):
    def moveZeroes(self, nums):
        """
        :type nums: List[int]
        :rtype: None Do not return anything, modify nums in-place instead.
        """
        a = 0
        for i in range(0,len(nums)):
            if(nums[i] != 0):
                nums[a] = nums[i]
                a = a+1
        while(a<len(nums)):
            nums[a] = 0
            a=a+1
        

        