#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int num1 ;
    int num2 ;

    printf("Enter First Number :");
    cin >>  num1;
    printf("Enter Second Number :");
    cin >>  num2;

    // The Numbers Before swapping is

    cout << "Number 1 before swapping:" << num1 << "\n" ;
    cout << "Number 2 before swapping:" << num2 << endl ;

    // swap
     // Approach 1
     int temp = num1;
     num1 = num2;
     num2 = temp;
    
    // after swaping 

    cout << "Number 1 after swaping:"<< num1 << endl;
    cout << "Number 2 after swaping:"<< num2 << endl;


}