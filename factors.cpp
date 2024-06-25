#include<iostream>
using namespace std;

int main()
{
    //Program to print factors of any numbers.
    //Factor of a number is a number which completely divides that number leaving no remainder.
    int num, i ;
    cout<<"Enter a number "<<endl;
    cin>>num;
    cout<<"The factors of "<<num<<" are : ";

    for( i = 1 ; i<=num ; i++){
    if (num % i == 0){
        
        cout<<i<<",";
    }
    }
    return 0;
}
