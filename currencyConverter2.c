#include<stdio.h>

int main()
{
    float dollars, pounds, naira, dollarConversion, poundConversion;
    printf("Enter your amount in naira: ");
    scanf("%f",&naira);
    dollarConversion = (naira * 381);
    poundConversion = (naira * 523.26);

    printf("\nLoading.......Please wait");
    printf("\n\nYour amount in dollars is: $%3.2f", dollarConversion);
    printf("\nYour amount in pounds is: £%3.2f", poundConversion);
}
