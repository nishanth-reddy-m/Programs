#include <iostream>
using namespace std;

class Integer
{
    private:
    int val,bytes;

    public:
    Integer()
    {
        val = 1;
        bytes = 4;
    }
    void display()
    {
        cout<<"\nTotal Integers: "<<val<<endl;
        cout <<"Total bytes taken: "<<bytes<<endl;
    }
    void operator ++()
    {
        val += 1;
        bytes += 4;
    }
    void operator --()
    {
        if(val == 0)
        {
            cout<<"\nNo more Integers to Decrement!"<<endl;
        }
        else
        {
            val -= 1;
            bytes -= 4;
        }
    }
};

int main()
{
    Integer Int;
    Int.display();
    int val;
    while(true)
    {
        char input;
        cout<<"\nEnter +(Increment) or -(Decrement): ";
        cin>>input;
        if(input == '+')
        {
            ++Int;
        }
        else if (input == '-')
        {
            --Int;
        }
        else
        {
            cout<<"\nProgram Ended"<<endl;
            break;
        }
        Int.display();
    }
    return 0;
}