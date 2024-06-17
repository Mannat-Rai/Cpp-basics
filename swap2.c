#include <stdio.h>

int main() {
    int num1;
    int num2;
    
    // Corrected scanf statements to use address-of operator (&) and added format specifiers
    scanf("%d", &num1);
    scanf("%d", &num2);
    
    // Corrected printf statements to use format specifiers
    printf("Num1 before swap: %d\n", num1);
    printf("Num2 before swap: %d\n", num2);
    
    // Swapping logic
    num1 = num1 + num2;
    num2 = num1 - num2;
    num1 = num1 - num2;
    
    // Printing values after swap
    printf("Num1 after swap: %d\n", num1);
    printf("Num2 after swap: %d\n", num2);
    
    return 0;
}