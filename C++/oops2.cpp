#include <iostream>
using namespace std;

class Animal
{
    private:
    void dangerous(bool isdanger)
    {
        if(isdanger)
        {
            cout<<"It is dangerous"<<endl;
        }
        else
        {
            cout<<"It is not dangerous"<<endl;
        }
    }

    protected:
    Animal(){}
    string intro = "This is ",location,name;
    bool danger;
    string introduction(string name)
    {
        cout<<intro+name<<endl;
        return name;
    }

    public:
    void isDangerous()
    {
        dangerous(danger);
    }
    void habitat()
    {
        cout<<"Habitat: "<<location<<endl;
    }

};

class Cheetah: public Animal
{
    public:
    Cheetah()
    {
        name = introduction("Cheetah");
        danger = true;
        location = "Land";
    }
};

class Dolphin: public Animal
{
    public:
    Dolphin()
    {
        name = introduction("Dolphin");
        danger = false;
        location = "Water";
    }
};


int main()
{
    Cheetah cheetah;
    cheetah.habitat();
    cheetah.isDangerous();
    cout<<endl;
    Dolphin dolphin;
    dolphin.habitat();
    dolphin.isDangerous();
    return 0;
}