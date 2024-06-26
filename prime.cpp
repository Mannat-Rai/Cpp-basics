#include<iostream>
using namespace std;

int main()
{
    //Program to check if a number is prime ir not.
    //A number is said to be prime if only it is divisible by 1 and the number itself.

    int i , num , isprime = 1 ;
    //isprime is a flag variable , if it is 1 then the number is prime .
    //Otherwise if it's 0 the number is composite.
    //We have set the isprime currently as 1 assuming the number is prime.

    cout<<"Enter a number to check prime or not :"<<endl;
    cin>>num;
    for( i = 2 ; i <= num/2 ; i++){
        if(num % i == 0){
            isprime = 0;
            break;
        }
    }
    if( isprime == 1 && num > 1){
        cout<<num<<" is a prime number."<<endl;
    }
    else if( num == 1){
        cout<<num<<" is neither prime nor composite."<<endl;
    }
    else{
        cout<<num<<" is not a prime number."<<endl;
    }
    return 0;
}
