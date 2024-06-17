#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter a number."<<endl;
    cin>>num;
    if((num%5==0) && (num%11==0)){
        cout<<num<<" is divisible by both 5 and 11.";
    }
    else if((num%5==0) && (num%11!=0)){ 
        cout<<num<<" is only divisible by 5 and not 11.";
    }
    else if((num%11==0) && (num%5!=0)){
        cout<<num<<" is only divisible by 11 and not 5.";
    }
    else{
        cout<<num<<" is not divisible by both 5 and 11.";
    }
    return 0;
}