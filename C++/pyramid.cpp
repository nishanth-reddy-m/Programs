#include <iostream>
using namespace std;
int main()
{
    int num = 10;
    for(int k = 1; k <= num; k = k+2)
        {
            for(int i = (num-k)/2; i > 0; i--)
            {
                cout<<' ';
            }
            for(int j = 1; j <= k; j++)
            {
                cout<<'*';
            }
            cout<<endl;
        }
    return 0;
}