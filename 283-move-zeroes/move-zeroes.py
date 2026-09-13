class Solution(object):
    def moveZeroes(self, nums):
        j = 0 # i->searches for non-zero numbers
            # j->tells where to put them

        for i in range(len(nums)):
            if nums[i] != 0:
                nums[j] = nums[i]
                j+=1

        while j < len(nums):
            nums[j] = 0
            j+=1

'''lind non-zero -> put it at j -> increase j
   fill the remaining positions with 0'''
        