#include<iostream>

using namespace std;

int main(){
//Program to check if you are eligible for voting according to your age.
//If the person is 18 or above he/she is eligible for voting.
int age;
    cout<<"Please enter your age in numbers"<<endl;
    cin>>age;
 if(age>=18)
 {
    cout<<"Congratulations!You are eligible for voting."<<endl;
 }
 else if(age<=0){
    cout<<"You are not yet born."<<endl;
 }
 else{
    cout<<"You are not yet eligible for voting."<<endl;
 }

    
    return 0;
}