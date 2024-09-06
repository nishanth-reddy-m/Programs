#include <iostream>
using namespace std;
int main()
{
    int var1 = 16;
    int *ptr1;
    ptr1 = &var1;
    cout<<"Value in var1: "<<var1<<endl;
    cout<<"Value in ptr1: "<<*ptr1<<endl;
    (*ptr1)++;
    cout<<"Value in var1 after incrementation of value in ptr1: "<<var1<<endl;
    cout<<"Value in ptr1 after incrementation of value in ptr1: "<<*ptr1<<endl;

    int var2 = 108;
    int *ptr2 = &var2;
    cout<<"Address of var2: "<<&var2<<endl;
    cout<<"Address of ptr2: "<<ptr2<<endl;

    int array1[] = {*ptr1,*ptr2,*ptr1+*ptr2};
    char array2[] = "Hello";
    int *array_ptr = array1;
    cout<<"Iteration through array"<<endl;
    cout<<*array_ptr<<endl;
    cout<<*(++array_ptr)<<endl;
    cout<<*(++array_ptr)<<endl;
    return 0;
}