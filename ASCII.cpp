#include<iostream>
using namespace std;

int main()
{
    //Program to print all ASCII characters.
    //There are total 256 ASCII characters in total.

    int i;
    for(i = 0; i <= 256; i++){
        cout<<"ASCII value of character "<<static_cast<char>(i)<<":"<<i<<endl;
    }
    return 0;
}
