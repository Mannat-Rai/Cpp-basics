#include<iostream>
using namespace std;

int main()
{
    //If year is divisible by 4 and not 100 or fully divisible by 400, than the year is a leap year.
    //Otherwise it's a common year.
    int year;
    cout<<"Enter a year."<<endl;
    cin>>year;
    if(((year%4==0) && (year%100!=0)) || (year%400==0)){
        cout<<year<<" is a leap year.";
    }
    else{
        cout<<year<<" is a common year.";
    }
    return 0;
}