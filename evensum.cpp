#include<iostream>
using namespace std;

int main()
{
    //Program to calculate sum of all even numbers from 1 to 10.
    
    int i = 2;

     int sum = 0;

    while(i <= 10){
     sum = i + sum;
     i = i+2;
    }
    cout<<sum<<endl;
    return 0;
}
