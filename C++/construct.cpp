#include <iostream>
using namespace std;

class Calculate
{
    private:
    int num1,num2;
    
    public:
    Calculate(int a, int b){
        num1 = a;
        num2 = b;
    }
    int add()
    {
        return num1+num2;
    }
    int subtract()
    {
        return num1-num2;
    }
    int multiply()
    {
        return num1*num2;
    }
    int divide()
    {
        return num1/num2;
    }
};

int main()
{
    Calculate cal(3,2);
    cout<<cal.add()<<endl;
    cout<<cal.subtract()<<endl;
    cout<<cal.multiply()<<endl;
    cout<<cal.divide()<<endl;
    return 0;
}