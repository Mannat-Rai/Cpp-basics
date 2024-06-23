#include<iostream>
using namespace std;

int main()
{
    //Program to detect whether the entered number is palindrome or not.
    //A palindrome is a number which reversed gives the same original number.
    //For this we will just reverse the digits and check whether they are equal to original number or not.
   //We have to see that if use num in place of dig it will always execute the 2nd statement , as num = 0.
    int num , reversed = 0 ;
     cout<<"Enter a number : "<<endl;
    cin>>num;
    int dig = num;

   while(dig!=0){
        reversed = (reversed*10) + (dig%10); 
        dig = dig/10; 
     }
     if(num == reversed ){
        cout<<"The entered number is a palindrome.";
     }
     else{
        cout<<"The entered number is not a palindrome.";
     }

    return 0;
}
