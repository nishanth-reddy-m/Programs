nums1 = [0]
m = 0
nums2 = [1] 
n = 1

k = m+n-1 # Last index of nums1(0's included)
# Last indexes of nums1(0's excluded) and nums2 respectively
m -= 1
n -= 1
# iterate through entire nums1 in reverse
while(k >= 0):
    # 
    if (m == k):
        break
    if (m >= 0 and n >= 0):
        # If nth element of nums2 is greater than mth element of nums1
        if (nums2[n] >= nums1[m]):
            nums1[k] = nums2[n] # Add nth element of nums2 to kth element of nums1
            # Decrement the index pointers n,k. Since they are sorted successfully
            n -= 1
            k -= 1
        # If nth element of nums2 is less than or equal to mth element of nums1
        else:
            nums1[k] = nums1[m] # Place the mth element of nums1 in kth element of nums1
            # Decrement the index pointers m,k. Since they are sorted successfully
            m -= 1
            k -= 1
    if(n >= 0 and m < 0):
        # if only n is left i.e nums1 are sorted successfully
        nums1[k] = nums2[n]
        n -= 1
        k -= 1
print(nums1)