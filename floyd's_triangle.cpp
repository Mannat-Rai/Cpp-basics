#include<iostream>
using namespace std;

int main()
{
    //Program to print floyd's triangle.

    int i , j , n , count = 1;
    cout<<"Enter n : "<<endl;
    cin>>n;

    for( i = 1 ; i <= n; i++){
        for( j = 1 ; j <= i ; j++){
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    return 0;
}
