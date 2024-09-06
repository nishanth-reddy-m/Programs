#include <iostream>
using namespace std;
int main()
{
    int array[] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(array)/sizeof(int); i++)
    {
        cout<<*(array+i)<<endl;
    }
    cout<<endl;
    int array2d[3][3] = {{9,8,7},{6,5,4}};
    for(int i = 0; i < 6; i++)
    {
        cout<<*(*(array2d)+i)<<endl;
    }
    cout<<endl;
    char String[] = "Hello";
    for(int i = 0; i < sizeof(String); i++)
    {
        cout<<*(String+i)<<endl;
    }
    return 0;
}