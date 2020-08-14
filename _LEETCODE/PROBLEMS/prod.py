class Solution:
    def productExceptSelf(self, nums):
        n = len(nums)
        prod = [1 for _ in range(n)]
        for i in range(1,n):
            prod[i] = prod[i-1] * nums[i-1]
        # print(prod)
        last = prod[-1]
        for i in reversed(range(n-1)):
            prod[i] = prod[i] * last
            last *= nums[i]
        print(prod)
solve = Solution()
solve.productExceptSelf([1,2,3,4])

# [24,12,8,6]