#include<iostream>
using namespace std;

int main()
{
    //Profram to print half pyramid using numbers.

    int i , j , n ;
    cout<<"Enter n : "<<endl;
    cin>>n;
    for ( i = 1 ; i <= n ; i++){
        for( j = 1 ; j <= i ; j++){
            cout<<i<<" ";
        }cout<<endl;
    }
    
    return 0 ;
}
    
    
