#include<stdio.h>

int main()
{
    float b, h, area;
    printf("Enter your base below: ");
    scanf("%f", &b);
    printf("Enter your height below: ");
    scanf("%f", &h);
    area = (b * h) / 2;
    printf("The area of the given triangle is: %f", area);
}
