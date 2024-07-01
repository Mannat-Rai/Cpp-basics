#include<iostream>
using namespace std;

int main()
{
    //Program to make different patterns .

    int i , j , row , col;
    cout<<"Enter number of rows : "<<endl;
    cin>>row;
    cout<<"Enter number of columns : "<<endl;
    cin>>col;

    for( i = 1 ; i <= row ; i++){
        for( j = 1 ; j <= col ; j++){
            cout<<"*";
         }
         cout<<endl;
    }
    return 0;
}
