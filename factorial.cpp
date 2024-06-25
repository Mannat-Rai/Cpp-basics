#include<iostream>
using namespace std;

int main()
{
    //Program to find factorial of any number.
    int num , i;
     long long int fact = 1;
    cout<<"Enter a number :"<<endl;
    cin>>num;
    for(i =1 ; i<= num; i++){
        fact = fact* i;
    }
    cout<<"The factorial of "<<num<<" is "<<fact;
    
    return 0;
}
