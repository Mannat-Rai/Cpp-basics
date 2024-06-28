#include<iostream>
using namespace std;

int main()
{
    //Program to check if the entered number is a perfect number .
    //Perfect number is a number which is equal to the sum of it's positive divisors.

    int i , num , sum = 0;
    cout<<"Enter a number to check if it is a perfect number : "<<endl;
    cin>>num;
    //First we will check if i is divisor of num and if so add it in sum.
    for( i = 1; i <= num/2; i++){
        if(num % i == 0 ){
            sum = sum + i;
        }
    }
    //Checking is sum of proper divisors is equal to num.
    if(sum == num && num > 0){
        cout<<num<<" is a perfect number."<<endl;
    }
    else{
        cout<<num<<" is not a perfect number."<<endl;
    }
    return 0;
} 
