#include <iostream>

int main()
{
    for(int i = 1; i<=10; i++)
    {
        std::cout<<i;
        if(i%2)
        {
            std::cout<<" is odd"<<std::endl;
        }
        else
        {
            std::cout<<" is even"<<std::endl;
        }
    }
    return 0;
}