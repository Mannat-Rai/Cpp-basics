#include<iostream>
using namespace std;

int main()
{
    //Program to print inverted half pyramid.
    int i , j , n;
    cout<<"Enter n : "<<endl;
    cin>>n;
    for ( i = n ; i >= 1 ; i--){
        for( j = 1 ; j <= i ; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
