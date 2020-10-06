# My original solution.

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        running_sum = []
        running_sum.append(nums[0])
        
        for number in nums[1:]:
            running_sum.append(number + running_sum[-1])
            
        return running_sum

# The faster solution after checking LeetCode submissions.

class Solution:
    def runningSum(self, nums: List[int]) -> List[int]:
        running_sum = []
        accumulator = 0
        for number in nums:
            accumulator += number
            running_sum.append(accumulator)
        return running_sum
            