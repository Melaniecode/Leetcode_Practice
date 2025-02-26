class Solution:
    def isMonotonic(self, nums: List[int]) -> bool:
        increasing = decreasing = False
        
        for i in range(1, len(nums)):
            if nums[i] > nums[i - 1]:
                increasing = True
            elif nums[i] < nums[i - 1]:
                decreasing = True
        
        return not (increasing and decreasing)