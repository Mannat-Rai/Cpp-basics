#include<iostream>
using namespace std;

int main()
{
    //Program to print number pattern.

    int i , j , n ;
    cout<<"Enter n : "<<endl;
    cin>>n;
    for( i = 1 ; i <= n ; i++){
        for( j = 1 ; j <= n-i ; j++){
            cout<<" ";
        }
        for( j = 1 ; j <= i ; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}numabe
