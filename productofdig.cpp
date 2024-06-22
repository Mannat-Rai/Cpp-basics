#include<iostream>
using namespace std;

int main()
{
    //Program to find product of digits of an entered number.
    
    int number;
    int product = 1;
    int last_digit;
    cout<<"Enter a number : "<<endl;
    cin>>number;
    //To find the product we will extract last digit of number until it becomes 0.

    while(number!=0){
        last_digit = number%10;
        product = product * last_digit;
        number = number/10;
    } 
    cout<<"The product of digits of the above number is : "<<product<<endl;

    return 0;
}
