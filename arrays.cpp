#include<iostream>
using namespace std;

int main()
{
    //Program to take user input and find maximum , minimum using arrays.
    int n , i , max , min ;
    cout<<"Enter the size of array : "<<endl;
    cin>>n;
    int array [ n ];
    cout<<"Enter the elements of array : "<<endl;
    for( i = 0 ; i < n ; i ++){
         cin>>array[i];
    }
    max = array[0];
    min = array[0];
    for( i = 1 ; i < n ; i++){
        if(array[i] > max){
            max = array[i];
        }
        else if ( array[i] < min){
            min = array[i];
        }
    }
    cout<<"The maximum element is : "<<max<<endl;
     cout<<"The minimum element is : "<<min<<endl;
    
    return 0;
}
