#include<iostream>
using namespace std;

int main()
{
    //Program to make hollow rectangle .
    int i , j , rows , cols;
    cout<<"Enter rows : "<<endl;
    cin>>rows;
    cout<<"Enter columns : "<<endl;
    cin>>cols;
    for( i = 1; i <= rows ; i++){
        for( j = 1; j <= cols ; j++){
            if( i == 1 || i == rows){
                cout<<"*";
            }
            else if ( j == 1 || j == cols){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}
