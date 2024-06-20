#include<iostream>
using namespace std;

int main()
{
    /* Program to count total number of digits in a given integer using while loop.
    To count the digits we can use a simple logic of removing the last digit of 
    integer by dividing it by 10. Which will increase the count by 1. */ 

    int num ;
    int count = 0;
    cout<<"Enter an integer :"<<endl;
    cin>>num;

    while(num != 0){
        num = num/10;
        count++;
    }
    cout<<"The number of digits in the entered integer are : "<<count<<endl;
    return 0;
}
