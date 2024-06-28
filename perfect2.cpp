#include<iostream>
using namespace std;

int main()
{
    //Program to print all perfect numbers from 1 to n.

    int i , k , upperlimit , sum ;
    cout<<"Enter upper limit : "<<endl;
    cin>>upperlimit;
    for ( i = 1 ; i <= upperlimit; i++ ){
        sum = 0;
        //Checking if i is a perfect number.
        for( k = 1 ; k < i ; k++){
           if( i % k == 0 ){
            sum = sum + k;
           }
        }
    
    if( sum == i){
        cout<<i<<" ";
    }
    }
    return 0;
}
