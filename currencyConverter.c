#include<stdio.h>

int main()
{
    float dollars, pounds, naira, dollarsTopounds, dollarsToNaira, poundsToDollars,poundsToNaira ,nairaToDollars, nairaToPounds;
    //printf("What do you want to convert? dollars, pounds or naira ");
    char choice[10];
    printf(("Enter a currency(dollars/naira/pounds):  "));
    scanf(" %s", &choice);
    if(strcmp(choice, "dollars")== 0) {
        printf("Enter your amount in dollars ");
        scanf("%f", &dollars);
        dollarsTopounds = (dollars * 0.73);
        dollarsToNaira = (dollars * 381);
        printf("The amount in Pounds is: %f", dollarsTopounds);
        printf("\nThe amount in Naira is: %f", dollarsToNaira);
    }
    else if(strcmp(choice, "pounds")== 0) {
        printf("Enter your amount in pounds ");
        scanf("%f", &pounds);
        poundsToDollars = (pounds * 1.37);
        poundsToNaira = (pounds * 523.36);
        printf("The amount in dollars is: %", poundsToDollars);
        printf("\nThe amount in Naira is: %f", poundsToNaira);
    }
    else if(strcmp(choice, "naira")== 0) {
        printf("Enter your amount in naira ");
        scanf("%f", &naira);
        nairaToDollars = (naira * 0.0026);
        nairaToPounds = (naira * 0.0019);
        printf("The amount in dollars is: %f", nairaToDollars);
        printf("\nThe amount in Pounds is: %f", nairaToPounds);
    }
    else {
        printf("Invalid input");
    }
}
