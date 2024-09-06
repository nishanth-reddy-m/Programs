#include <iostream>
using namespace std;

class Complex
{
    private:
    int real;
    int imaginary;

    public:
    void input()
    {
        cout<<"Enter the real part: ";
        cin>>real;
        cout<<"Enter the imaginary part: ";
        cin>>imaginary;
        cout<<endl;
    }
    Complex operator+(Complex obj)
    {
        Complex result;
        result.real = real + obj.real;
        result.imaginary = imaginary + obj.imaginary;
        return result;
    }
    Complex operator-(Complex obj)
    {
        Complex result;
        result.real = real - obj.real;
        result.imaginary = imaginary - obj.imaginary;
        return result;
    }
    void output()
    {
        cout<<real<<'+'<<imaginary<<'i'<<endl;
        cout<<endl;
    }
};

int main()
{
    Complex complex1,complex2,sum,difference;
    cout<<"Enter the details of first Complex: "<<endl;
    complex1.input();
    cout<<"Enter the details of second Complex: "<<endl;
    complex2.input();
    cout<<"First Complex = ";
    complex1.output();
    cout<<"Second Complex = ";
    complex2.output();
    sum = complex1 + complex2;
    cout<<"Sum = ";
    sum.output();
    difference = complex1 - complex2;
    cout<<"Difference = ";
    difference.output();
    return 0;
}