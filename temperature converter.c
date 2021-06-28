#include<stdio.h>

int main()
{
    float celsius, farenheit, kelvin, farenheitConversion, kelvinConversion;
    printf("Enter your temperature in celsius: ");
    scanf("%f", &celsius);
    farenheitConversion = ((celsius * 1.8) + 32);
    kelvinConversion = (celsius + 273.15);

    printf("\nLoading.......Please wait");
    printf("\n\nYour new temperature in farenheit is: %3.2f", farenheitConversion);
    printf("\nYour new temperature in kelvin is: %3.2f", kelvinConversion);
}
