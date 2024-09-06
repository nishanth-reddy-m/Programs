#include <iostream>
using namespace std;

int main()
{
    int array[] = {1,3,2,4};
    swap(array[1],array[2]);
    for(int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        cout<<array[i]<<' ';
    }
}