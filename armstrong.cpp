#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    //Program to check if a number is armstrong number.
    
    int num , originalnum, sum , lastdig,   count= 0;
    cout<<"Enter a number to check if it is an armstrong number : "<<endl;
    cin>>num;
    //Initialize sum to 0, and copy the value of num to originalnum.
    sum = 0;
    originalnum = num;
    int temp = num;
    while(temp > 0){
        temp = temp / 10;
        count++;
    }
    temp = originalnum;
    while( temp > 0){
        lastdig = temp % 10;
      sum = sum + pow(lastdig,count) ;
      temp = temp/10; 
    }
    //Now if sum is eqaul to original number than the number is armstrong otherwise not.
    if(sum == originalnum){
        cout<<originalnum<<" is an Armstrong number."<<endl;
    }
    else{
        cout<<originalnum<<" is not an Armstrong number."<<endl;
    }
    
    return 0;
}
