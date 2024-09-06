#include <iostream>
using namespace std;

class Destruct
{
    public:

    Destruct()
    {
        cout<<"Object Constructed"<<endl;
    }
    ~Destruct()
    {
        cout<<"Object Destructed"<<endl;
    }
    void method()
    {
        cout<<"This is a method"<<endl;
    }
};

int main()
{
    Destruct destruct;
    destruct.method();
    cout<<"End of main"<<endl;
    return 0;
}