#include<stdio.h>
#include<math.h>

int main()
{
    float a, b, c, d, x1, x2;
    printf("Enter a: ");
    scanf("%f", &a);
    printf("Enter b: ");
    scanf("%f", &b);
    printf("Enter c: ");
    scanf("%f", &c);
    d = (b * b) - (4 * a * c);
    x1 = (-b - sqrt(d))/(2 * a);
    x2 = (-b + sqrt(d))/(2 * a);
    printf("The value of x1 is: %f \n", x1);
    printf("The value of x2 is: %f", x2);
}
