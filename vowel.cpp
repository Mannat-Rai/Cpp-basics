#include<iostream>
using namespace std;

int main()
{
    char alp;
    cout<<"Enter any alphabet."<<endl;
    cin>>alp;
    if(alp=='a' || alp=='e' || alp=='i' ||alp=='o' || alp =='u') {
        cout<<alp<<" is a vowel.";
    }
    else{
        cout<<alp<<" is a consonant.";
    }
    return 0;
}