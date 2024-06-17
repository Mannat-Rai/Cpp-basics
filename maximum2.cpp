#include<iostream>
using namespace std;

int main()
{
   //Program to find greater between three numbers.
   int num1;
   int num2;
   int num3;
   cout<<"Enter num1"<<endl;
   cin>>num1;
   cout<<"Enter num2"<<endl;
   cin>>num2;
   cout<<"Enter num3"<<endl;
   cin>>num3;
   if((num1>num2) && (num1>num3)){
    cout<<num1<<" is the greatest.";
   }   
   else if((num2>num1) && (num2>num3)){
    cout<<num2<<" is the greatest.";
   }
   else if((num3>num1) && (num3>num2)){
    cout<<num3<<" is the greatest.";
   }
   else if((num1==num2) && (num2==num3)){
    cout<<"All numbers are equal.";
   }
   
   
    return 0;
}