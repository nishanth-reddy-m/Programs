# nums = [1,1,2]
nums = [0,0,1,1,1,2,2,3,3,4]

# i = 0
# while(i < len(nums) - 1):
#     if (nums[i] == nums[i+1]):
#         nums.remove(nums[i+1])
#     else:
#         i += 1

temp = []
for num in nums:
    if num not in temp:
        temp.append(num)
    else:
        continue
nums = temp

print(len(nums),nums)

