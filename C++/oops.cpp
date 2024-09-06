#include <iostream>
using namespace std;

class Print
{
    public:
    string name;
    void hello()
    {
        cout<<"Hello "<<name<<endl;
    }
};

class Confidential
{
    private:
    string data;

    public:
    void setdata(string d)
    {
        data = d;
    }
    string getdata()
    {
        return data;
    }
};

int main()
{
    
    Print print;
    cout<<"Enter your name: ";
    cin>>print.name;
    cin.ignore();
    print.hello();
    string data;
    Confidential Private;
    cout<<"Enter the data: ";
    getline(cin,data);
    Private.setdata(data);
    cout<<Private.getdata();
    //Private.data = "green";
    return 0;
}