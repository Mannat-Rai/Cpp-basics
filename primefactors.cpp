#include<iostream>
using namespace std;

int main()
{
    //Program to find all prime factors of a number .
    //First we will find out the factors and then check the prime one's among them.

    int i , k , num ;
    cout<<"Enter a number to get it's prime factors : "<<endl;
    cin>>num;
    cout<<"The prime factors of "<<num<<" : "<<endl;
    
    for ( i = 2; i <= num ; i++){
      if( num % i == 0){
      bool  isprime = 1;
      for( k = 2; k <= i/2; k++){
        if ( i % k == 0){
            isprime = 0;
            break;
        }
      }
      if( isprime){
        cout<<i<<" ";
     }
      }  
    }
    return 0;
}
