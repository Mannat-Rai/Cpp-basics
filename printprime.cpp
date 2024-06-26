#include<iostream>
using namespace std;

int main()
{
    //Program to print prime numbers from 1 to the number entered.
    int i , k , num ;
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
                cout<<i<<endl;
                 
        }
    }
    return 0;
}
