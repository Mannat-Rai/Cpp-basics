#include<iostream>
using namespace std;

int main()
{
    //An input character is alphabet if it is in between a-z or A-Z.
    char alpha;
    cout<<"Enter an alphabet."<<endl;
    cin>>alpha;
    if((alpha >= 'a') && (alpha <= 'z') || (alpha >= 'A') && (alpha <= 'Z')){
        cout<<alpha<<" is an alphabet.";
    }
    else{
        cout<<alpha<<" is not an alphabet.";
    }
    return 0;
}