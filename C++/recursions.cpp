#include <iostream>
#include "recursive_prime.h"
using namespace std;

int sum(int n)
{
    if (n < 1)
    {
        return 0;
    }
    return n + sum(n-1);
}

int fact(int n)
{
    if (n < 2)
    {
        return 1;
    }
    return n * fact(n-1);
}

int fibonacii(int n)
{
    if(n<2)
    {
        return n;
    }
    return fibonacii(n-2) + fibonacii(n-1);
}

void fib(int upto,int from)
{
    if(from<=upto)
    {
        cout<<fibonacii(from)<<' ';
        return fib(upto,from+1);
    }
}

void fib(int upto)
{
    return fib(upto,0);
}

int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Sum = "<<sum(n)<<endl;
    cout<<"Factorial = "<<fact(n)<<endl;
    cout<<"Fibonacii = "<<fibonacii(n)<<endl;
    cout<<"Fibonacii series = ";
    fib(n);
    cout<<endl;
    cout<<"Fibonacii series from "<<n/2<<" to "<<n<<" = ";
    fib(n,n/2);
    cout<<endl;
    prime(n);
    prime_upto(n);
    return 0;
}