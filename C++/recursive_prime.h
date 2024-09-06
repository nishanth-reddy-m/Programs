#include <iostream>
using namespace std;

bool is_prime(int n,int p)
{
    if (p==1)
    {
        return true;
    }
    if(n%p!=0)
    {
        is_prime(n,p-1);
    }
    else
    {
        return false;
    }
}

bool is_prime(int n)
{
    return is_prime(n,n-1);
}

void prime(int n)
{
    if(is_prime(n))
    {
        cout<<n<<" is a prime number"<<endl;
    }
    else
    {
        cout<<n<<" is not a prime number"<<endl;
    }
}

void prime_upto(int n)
{
    int array[n];
    int index = 0;
    for (int i=2;i<=n;i++)
    {
        if (is_prime(i))
        {
            array[index] = i;
            index++;
        }
    }
    cout<<"Prime numbers upto "<<n<<" = ";
    for (int j=0;j<index;j++)
    {
        cout<<array[j]<<' ';
    }
    cout<<endl;
}