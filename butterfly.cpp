#include<iostream>
using namespace std;

int main()
{
    //Program to print the butterfly pattern.

    int i , j , n , space;
    cout<<"Enter n : "<<endl;
    cin>>n;
//for upper half.
    for( i =1 ; i <= n ; i++){
        for( j = 1; j <= i ; j++){
            cout<<"*";
        }
        space = 2*n - 2*i ;
        for( j = 1 ; j <= space ; j++){
            cout<<" ";
        }
        for( j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }//For lower half.
    for( i =n ; i >= 1; i--){
        for( j = 1; j <= i ; j++){
            cout<<"*";
        }
        space = 2*n - 2*i ;
        for( j = 1 ; j <= space ; j++){
            cout<<" ";
        }
        for( j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
