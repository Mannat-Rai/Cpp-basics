#include<iostream>
using namespace std;

int main()
{
    //Program to enter angles of triangle and check whether the triangle is valid or not.
    int ang1;
    int ang2;
    int ang3;
    int sum;
    //The sum of interior angles of a triangle is always 180.
     cout<<"enter angle 1 \n";
     cin>>ang1;
     cout<<"enter angle 2 \n";
     cin>>ang2;
     cout<<"enter angle 3 \n";
     cin>>ang3;
   
     sum = ang1 + ang2 + ang3;
     if(sum==180 && ang1>0 && ang2>0 && ang3>0){
        cout<<"The triangle is valid.";
     }
     else{
        cout<<"The triangle is not valid.";
     }

    return 0;
}