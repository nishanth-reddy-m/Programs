from time import time

start = time()

nums1 = [3,4,6,0,0,0]
m = 3
nums2 = [1,2,5] 
n = 3


i,j,k = m-1,n-1,m+n-1

while j >= 0 and k >= 0 and i >= 0:
    if (nums1[i] >= nums2[j]):
        nums1[k]=nums1[i]
        i -=1
        k -=1
        print(nums1)
        print(i, " ", j , " ", k)
        print("loop 1")
    else:
        nums1[k]=nums2[j]
        j -=1
        k -=1
        print(nums1)
        print(i, " ", j , " ", k)
        print("loop 2")

while j >= 0:
    nums1[k] = nums2[j]
    j -=1
    k -=1
    print(i, " ", j , " ", k)

print(len(nums1))
print((time()-start)*1000, "ms")