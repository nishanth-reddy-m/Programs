class Solution:
    def twoSum(self, nums: list[int], target: list[int]) -> list[int]:
        Map = {}
        for i in range(len(nums)):
            if target - nums[i] in Map:
                return [Map[target - nums[i]],i]
            else:
                Map[nums[i]] = i
sol = Solution()
nums = input('Enter the list: ').strip('[]').split(',')
target = int(input('Enter the target: '))
nums = list(map(int,nums))
print(sol.twoSum(nums,target))