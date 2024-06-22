#include<iostream>
using namespace std;

int main()
{
    //Program to find sum of digits of an entered number.
    
    int number;
    int sum = 0;
    cout<<"Enter a number : "<<endl;
    cin>>number;
    //To find the sum we will extract last digit of number until it becomes 0.

    while(number!=0){
        sum = sum + number%10;
        number = number/10;
    } 
    cout<<"The sum of digits of the above number is : "<<sum<<endl;

    return 0;
}
