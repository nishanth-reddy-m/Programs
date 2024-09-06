#include <iostream>
#include <typeinfo>
using namespace std;

void TypeInfo(auto data)
{
    cout<<typeid(data).name()<<endl;
}

int main()
{
    TypeInfo(12);
    TypeInfo(12.5);
    TypeInfo(12.5f);
    TypeInfo('a');
    TypeInfo(true);
    TypeInfo(9876543210);
    return 0;
}