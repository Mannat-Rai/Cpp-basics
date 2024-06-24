#include<iostream>
using namespace std;

int main()
{
    //Program to print the entered number in words.

    int num ,newdig=0;
    cout<<"Enter a number "<<endl;
    cin>>num;
    while( num!= 0){
        newdig= (newdig*10) + (num%10);
        num = num/10; 
    }

    while(newdig!= 0 ){
    switch (newdig%10) {
        case 1 :
        cout<<" One ";
        break;
        case 2:
        cout<<" Two ";
        break;
        case 3:
        cout<<" Three ";
        break;
        case 4:
        cout<<" Four ";
        break;
        case 5:
        cout<<" Five ";
        break;
        case 6:
        cout<<" Six ";
        break;
        case 7:
        cout<<" Seven ";
        break;
        case 8:
        cout<<" Eight ";
        break;
        case 9:
        cout<<" Nine ";
        break;
        case 0:
        cout<<" Zero ";
        break;
    } 
    newdig = newdig / 10;
    }
    return 0;
    }
