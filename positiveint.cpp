#include<iostream>

using namespace std;

int main(){
//Program to print positive , negative or zero by checking the number entered by the user
    int num ; 

    cout<<"Enter a postive integer"<<endl;
    cin>>num;

    if(num<0){
        cout<<" "<<endl<<"The user entered a negative integer";
    
    }
    else if(num==0){
        cout<<"You entered zero.";
    }
    else{
        cout<<"The positive integer is :"<<num;
    }

    return 0;
}