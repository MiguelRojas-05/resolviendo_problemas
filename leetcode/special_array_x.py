from typing import List

class Solution:
    def specialArray(self, nums: List[int]) -> int:
        n = len(nums)
        nums.sort()
        left, right = 0, n
        while left <= right:
            mid = left + (right - left) // 2
            r = 0
            for n in nums:
                if n >= mid:
                    r += 1
            if r == mid:
                return mid
            elif r > mid:
                left = mid + 1
            else:
                right = mid - 1
        return -1


# nums = [0,4,3,0,4]
nums = [0, 0]
solution = Solution()
result = solution.specialArray(nums)
print(result)