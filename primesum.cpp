#include<iostream>
using namespace std;

int main()
{
    //Program to calculate sum  of prime numbers from 1 to the number entered.
    int i , k , num , sum = 0;
    cout<<"Enter upper limit ."<<endl;
    cin>>num;
    cout<<"All the prime numbers from 1 to "<<num<<" are :"<<endl;
    for ( i = 2 ; i <= num ;i++ ){
       bool isprime = true;
        for(k = 2 ; k*k <= i ; k++){
            if( i % k == 0){
                isprime = false;
                break;
            }
        }
            if( isprime){
            sum = sum + i;
                 
        }
    }
    cout<<"Sum of all prime numbers between 1 to "<<num<<" is "<<sum;
    return 0;
}
