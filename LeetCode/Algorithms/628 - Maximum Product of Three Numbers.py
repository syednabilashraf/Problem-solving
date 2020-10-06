# My slow solution.
class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums = sorted(nums)
        
        top_three = nums[-3:]
        bottom_three = nums[:3]
        
        # If two numbers are negative:
        product_one = bottom_three[0] * bottom_three[1] * top_three[2]
        
        # Else all three from bottom will contribute
        product_two = top_three[0] * top_three[1] * top_three[2] 
        
        return max(product_one, product_two)

# Faster leetcode submission.
# The best submission just used if else for all combinations.

class Solution:
    def maximumProduct(self, nums: List[int]) -> int:
        nums.sort()
        return max(nums[-3]*nums[-2]*nums[-1],nums[0]*nums[1]*nums[-1])