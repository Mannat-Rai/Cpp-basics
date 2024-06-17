#include<iostream>
using namespace std;

int main()
{
    //Program to check whether the entered character is alphabet , digit or a special character.
    char c;
    cout<<"Enter a character."<<endl;
    cin>>c;
    //alphabet:
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        cout<<c<<" is an alphabet.";
    }
    //digit:
    else if ((c >= '0') && (c <= '9')){
        cout<<c<<" is a digit.";
    }
    //special character:
    else{
        cout<<c<<" is a special character.";
    }
    return 0;
}