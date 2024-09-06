#include <iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        if (n>=s)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<n-(s-n)<<endl;
        }
    }
}