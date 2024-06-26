#include<iostream>
using namespace std;

int main()
{
    //Program to find LCM of two numbers.
    int num1 , num2 , i , max , lcm;
    cout<<"Enter number 1 : "<<endl;
    cin>>num1;
    cout<<"Enter number 2 : "<<endl;
    cin>>num2;
    //Finding the maximum between two numbers.
    //If the greater number i.e. (max) is divisible by both numbers then lcm = max.
    max = (num1>num2) ? num1 : num2;
    i = max;
    while(35<=40){
        if(i%num1 == 0 && i%num2 == 0){
            lcm = i;
            break;
        }
     i = i+max;
    }
    cout<<"The LCM of "<<num1<<" "<<num2<<" is "<<lcm;
    return 0;
}
