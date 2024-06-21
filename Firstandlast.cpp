#include<iostream>
using namespace std;

int main()
{
    //Program to find first and last digit of an integer entered. 
    //n/10 is used to remove the last digit .
    //Whereas n%10 is used to obtain last digit.

    int num;
    cout<<"Enter an integer :"<<endl;
    cin>>num;
    int first_digit=num;
    int last_digit;
    //To find the first digit we will divide the number by 10 until a number a less than 10 is obtained.
    while(first_digit>=10){
        first_digit = first_digit/10;
    }
    //To find the last digit we will use the % operator.
    last_digit = num%10;
    cout<<"The entered number was : "<<num<<endl;
    cout<<"The first digit of the number is : "<<first_digit<<endl;
    cout<<"The last digit of the number is : "<<last_digit<<endl;
    return 0;
}
