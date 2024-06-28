#include<iostream>
using namespace std;

int main()
{
    //Program to Fibonacci series upto n terms.

    int a , b , c , i , terms;
    cout<<"Enter number of terms."<<endl;
    cin>>terms;
    a = 0;// n - 2th term.
    b = 1;// n - 1th term.
    c = 0;// current term.
    cout<<"Fibonacci terms : "<<endl;
    //Iterate through n terms.
    for ( i = 1 ; i <= terms ; i++){
        cout<<" "<<c;
        a = b;//copy n-1th term to n-2th term.
        b = c;//copy current term to n - 1th term.
        c = a + b;//new term.
    }
    return 0;
}
