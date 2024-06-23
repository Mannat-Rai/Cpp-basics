#include<iostream>
using namespace std;

int main()
{
    //Program to print the entered number by user in reverse.
    //For executing this program we will take a initialized variable which starts at 0 to add the numbers in it.
    int num , newdig = 0;

    cout<<"Enter a number : "<<endl;
    cin>>num;
    while( num!= 0){
        newdig= (newdig*10) + (num%10);
        num = num/10;
    }
    cout<<"The reversed number is : "<<newdig<<endl;
    return 0;
}
