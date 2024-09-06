nums = [0,1,2,2,3,0,4,2]
# nums = [4,5]
val = 2

# length = len(nums)
# i = j = k = c = 0
# for num in nums:
#     if (num != val):
#         k += 1
# while(length > k):
#     if (nums[i] == val):
#         c += 1
#         for j in range(i,length-1):
#             nums[j],nums[j+1] = nums[j+1],nums[j]
#         length -= 1
#     else:
#         i += 1
# print(k,i,c,nums)

# nums = list(filter(lambda x:x!=val,nums))
# print(nums)

# while(True):
#     if val in nums:
#         nums.remove(val)
#     else:
#         break
# print(len(nums),nums)
last = len(nums) - 1
if (last > 1):
    if (nums[last] == val or nums[last - 1] == val)