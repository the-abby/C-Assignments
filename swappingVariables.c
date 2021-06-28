#include<stdio.h>

int main()
{
    double num1, num2, swap;
    printf("Enter Your first number here: ");
    scanf("%lf", &num1);
    printf("Enter Your second number here: ");
    scanf("%lf", &num2);
    swap = num1;
    num1 = num2;
    num2 = swap;
    printf("Num1 is now %3.2lf \n", num1);
    printf("Num2 is now %3.2lf", num2);
}
