#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> nums = {4,5};
    int val = 4;

    int length = nums.size();
    int swaps = 0;
    if (length > 2)
    {
        int p1 = length - 1;
        int p2 = length - 2;
        if (nums[p1] == val)
            {
                swaps++;
            }
        if (nums[p2] == val)
            {
                swap(nums[p2],nums[p1]);
                swaps++;
            }
        while(p2 >= 0)
        {
            if(nums[p2] == val)
            {
                swap(nums[p2--],nums[--p1]);
                swaps++;
            }
            else
            {
                p2--;
            }
        }
    }
    if (length == 2)
    { 
        if (nums[0] == val && nums[1] == val)
        {
            swaps += 2;
        }
        if (nums[0] == val || nums[1] == val)
        {
            if (nums[0] == val)
            {
                swap(nums[0],nums[1]);
            }
            swaps ++;
        }
    }
    if(length == 1)
    {
        if (nums[0] == val)
        {
            swaps++;
        }
    }
    cout<<swaps<<' '<<length - swaps<<endl;
    for(int i = 0;i < length;i++)
    {
        cout<<nums[i]<<' ';
    }
}