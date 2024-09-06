#include <iostream>
using namespace std;

int main()
{
    string s;
    cout<<"Enter a string: ";
    getline(cin,s);
    cout<<"You have entered: ";
    cout<<s<<endl;
    s.push_back('s');
    cout<<"After pushing -> "<<s<<endl;
    s.pop_back();
    cout<<"After poping -> "<<s<<endl;
    return 0;
}