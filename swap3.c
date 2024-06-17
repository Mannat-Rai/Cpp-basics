#include<stdio.h>

    int main()
{
    //Program for swaping numbers.
    int num1;
    int num2;
    //User input.
    scanf("%d" ,&num1);
    scanf("%d" ,&num2);
    //Numbers before swaping.
    printf("num1 before swaping :%d\n", num1);
    printf("num2 before swaping :%d\n", num2);
    //swaping logic.

    num1 = num1*num2;
    num2 = num1/num2;
    num1 = num1/num2;



    //Numbers after swaping.
    printf("num1 after swaping :%d\n", num1);
    printf("num2 after swaping :%d\n", num2);

    return 0;
    

}