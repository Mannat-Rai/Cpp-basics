#include<iostream>
using namespace std;

int main()
{
    //Program to print the 0 - 1 pattern.

    int i , j , n  ;
    cout<<"Enter n : "<<endl;
    cin>>n;
    for( i = 1 ; i <= n ;i++){
        for( j = 1 ; j <= i ; j++){
           
            if( (i+j)%2==0){
                cout<<" 1";
            }
            else{
                cout<<" 0";
            }
           
        }
        cout<<endl;
    }
    return 0;
}
