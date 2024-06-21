#include<iostream>
using namespace std;

int main()
{
    //Program to find sum of first and last digits of a number .
    int num;
    cout<<"Enter an integer :"<<endl;
    cin>>num;
    int first_digit=num;
    int last_digit;

    while(first_digit>=10){
        first_digit = first_digit/10;
    }
    last_digit = num%10;
    cout<<"The entered number was : "<<num<<endl;
    cout<<"The first digit of the number is : "<<first_digit<<endl;
    cout<<"The last digit of the number is : "<<last_digit<<endl;
    cout<<"The sum of first and last digit is : "<<first_digit + last_digit<<endl;
    

    return 0;
}
