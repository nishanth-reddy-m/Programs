#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int>array;
    array.assign(2,2);
    array.pop_back();
    array.push_back(3);
    array.insert(array.begin(),1);
    array.insert(array.end(),1,4);
    array.push_back(5);
    cout<<"All Elements: ";
    for(auto i = array.begin(); i != array.end(); i++)
    {
        cout<<*i<<' ';
    }
    cout<<"\nMax size: "<<array.max_size()<<endl;
    cout<<"Capacity of vector: "<<array.capacity()<<endl;
    cout<<"Size of Vector = "<<array.size()<<endl;
    array.resize(3);
    cout<<"Size after resizing: "<<array.size()<<endl;
    cout<<"Capacity of vector after resizing: "<<array.capacity()<<endl;
    array.clear();
    cout<<"Size of Vector after clearing = "<<array.size()<<endl;
    cout<<"Capacity of vector after clearing: "<<array.capacity()<<endl;
    return 0;
    
}