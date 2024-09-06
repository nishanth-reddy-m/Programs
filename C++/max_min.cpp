#include <iostream>
using namespace std;

int maxi(int,int);
int mini(int,int);

int main()
{
    int a,b;
    cout<<"Enter number 1: ";
    cin>>a;
    cout<<"Enter number 2: ";
    cin>>b;
    cout<<"The maximum of "<<a<<" and "<<b<<" is "<<maxi(a,b)<<endl;
    cout<<"The minimum of "<<a<<" and "<<b<<" is "<<mini(a,b)<<endl;
}

int maxi(int a,int b)
{
    if (a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int mini(int a,int b)
{
    if (a>b)
    {
        return b;
    }
    else
    {
        return a;
    }
    return 0;
}