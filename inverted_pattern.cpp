#include<iostream>
using namespace std;

int main()
{
    //Program to print inverted pattern.

    int i , j , n ;
    cout<<"Enter n : "<<endl;
    cin>>n;
    for( i = 1 ; i <= n ; i++){
        for(j = 1 ; j <= n+1-i ;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}
