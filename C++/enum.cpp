#include <iostream>
using namespace std;

enum days{Sun=1,Mon,Tue,Wed,Thu,Fri,Sat};

int main()
{
    int day;
    cout<<"Enter a day(1-7): ";
    cin>>day;
    if (day == Sun || day == Sat)
    {
        cout<<"It is a holiday"<<endl;
    }
    else
    {
        cout<<"It is a working day"<<endl;
    }
    return 0;
}