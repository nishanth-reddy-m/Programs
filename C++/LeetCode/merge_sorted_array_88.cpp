#include <iostream>
using namespace std;

int main()
{
    int nums1[] = {1,2,3,0,0,0};
    int m = 3;
    int nums2[] = {2,5,6};
    int n = 3;
    
    int k = m+n-1;
    m--;
    n--1;
    while(k >= 0)
    {
        if (m == k)
        {
            break;
        }
        if (m >= 0 && n >= 0)
        {
            if (nums2[n] >= nums1[m])
            {
                nums1[k] = nums2[n];
                n--;
                k--;
            }
            else
            {
                nums1[k] = nums1[m];
                m--;
                k--;
            }
        }
        if(n >= 0 && m < 0)
        {
            nums1[k] = nums2[n];
            n--;
            k--;
        }
    }
    int length = sizeof(nums1)/sizeof(int);
    for(int i = 0;i < length;i++)
    {
        cout<<nums1[i]<<' ';
    }
}