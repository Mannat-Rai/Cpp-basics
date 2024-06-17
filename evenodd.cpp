#include<iostream>

using namespace std;

int main(){
    //Program to check if the number entered is even or odd.
    int number;
    cout<<"Enter a number."<<endl;
    cin>>number;
    if(number%2==0)
    {
        cout<<"The entered number is even.";
    }
    else
    {
        cout<<"The entered number is odd.";
    }

    
    return 0;
}