#include <iostream>
using namespace std;

void value(int a, int b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

void reference(int &a, int &b)
{
    a = a + b;
    b = a - b;
    a = a - b;
}

int main()
{
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    value(a,b);
    cout<<"After call by value"<<" a = "<<a<<" b = "<<b<<endl;
    reference(a,b);
    cout<<"After call by reference"<<" a = "<<a<<" b = "<<b;
    return 0;
}
