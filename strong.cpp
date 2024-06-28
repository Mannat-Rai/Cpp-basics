#include<iostream>
using namespace std;

int main()
{
    //Program to check if a number is a strong number.
    //Strong number is a number whose sum of factorial of digits si equal to the original number.

    int i , originalnum ,num , lastdig , sum; 
    long long fact; 
    sum = 0;
    cout<<"Enter a number to check if it is a strong number : "<<endl;
    cin>>num;
    originalnum = num;
    while( num > 0){
        lastdig = num % 10 ;
        fact = 1 ;
        for ( i = 1 ; i <= lastdig ; i++){
            fact = fact * i;
        }
        sum = sum + fact ;
        num = num / 10;
    }
    if ( sum == originalnum){
        cout<<originalnum<<" is a strong number."<<endl;
    }
    else {
        cout<<originalnum<<" is not a strong number."<<endl;
    }
     return 0;
}
