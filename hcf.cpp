#include<iostream>
using namespace std;

int main()
{
    //program to calculate HCF of two numbers.
    int num1 , num2, min, i, hcf=1;
    cout<<"Enter number 1 : "<<endl;
    cin>>num1;
    cout<<"Enter number 2 : "<<endl;
    cin>>num2;
    //Now we will find the minimum between the numbers .
    //Here the ternary operator is used which executes small conditions.
    min = (num1<num2) ? num1 : num2;
    for(i = 1 ; i<=min; i++){
        if(num1 % i == 0 && num2 % i == 0){
            hcf = i;
        }
    }
    cout<<"The HCF of "<<num1<<" , "<<num2<<" is "<<hcf;
     return 0;
}
