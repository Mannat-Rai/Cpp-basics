#include<iostream>
using namespace std;

int main()
{
    //Program to find power of any number.

    int base , exponent;
     long long int power = 1;
    int i;
    cout<<"Enter base : "<<endl;
    cin>>base;
    cout<<"Enter exponent : "<<endl;
    cin>>exponent;
    for(i = 0; i<exponent; ++i){
        power = power * base;
    } 
    cout<<base<<" raised to power of "<<exponent<<" is "<<power;
    return 0;
}
