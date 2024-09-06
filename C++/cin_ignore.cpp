#include <iostream>
using namespace std;

int main()
{
    string word;
    cout<<"Enter a word: ";
    cin>>word;
    cout<<"You entered: "<<word<<endl;
    cin.ignore();
    string line;
    cout<<"Enter a line: ";
    getline(cin,line);
    cout<<"You entered: "<<line<<endl;
    return 0;
}