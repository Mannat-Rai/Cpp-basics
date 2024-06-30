#include<iostream>
using namespace std;

int main()
{
    //Program to swap first and last digits of the entered number.
    int num ,i, originalnum , firstdig , lastdig ,swapped , count = 0 ;
    cout<<"Enter an integer :"<<endl;
    cin>>num;
    originalnum = num;
    firstdig = originalnum;
    while( num != 0){
        count++;
        num = num/10;
    }
    lastdig = originalnum % 10;
    num = originalnum / 10;
    
    while( firstdig >= 10){
        firstdig = firstdig/10;
    }
    int temp = 1;
    for (i = 0 ;i < count - 2 ; i++){
        temp = temp * 10;
    }
    swapped = (lastdig * temp * 10 )+ (num % temp)* 10 + firstdig;
    cout<<"The number after swapping is : "<<endl;
    cout<<swapped;
    
    return 0; 
    } 
