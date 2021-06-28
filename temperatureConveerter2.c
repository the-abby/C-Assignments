#include<stdio.h>

int main()
{
    float celsius, farenheit, kelvin, celsiusConverter, farenheitConverter, kelvinConverter;
    char temp[20];
    printf("Enter the temperature of your choice:(Celsius/Farenheit/Kelvin): ");
    scanf("%s", &temp);
    if(strcmp(temp,"celsius")==0) {
        printf("Enter your temperature in celsius: ");
        scanf("%f", &celsius);
        farenheitConverter = ((celsius * 1.8) + 32);
        kelvinConverter = (celsius + 273.15);
        printf("Your temperature in Farenheit is: %f", farenheitConverter);
        printf("\nYour temperature in kelvin is: %f", kelvinConverter);
    }
    else if(strcmp(temp,"farenheit")==0) {
        printf("Enter your temperature in farenheit: ");
        scanf("%f", &farenheit);
        celsiusConverter = ((farenheit - 32)/ 1.8);
        kelvinConverter= (((farenheit - 32)/1.8) + 273.15);
        printf("Your temperature in celsius is: %f", celsiusConverter);
        printf("\nYour temperature in kelvin is: %f", kelvinConverter);
    }
    else if(strcmp(temp,"kelvin")==0) {
        printf("Enter your temperature in kelvin: ");
        scanf("%f", &kelvin);
        celsiusConverter = ((273.15 - kelvin));
        farenheitConverter = (((273.15 - kelvin) * 1.8) + 32);
        printf("Your temperature in celsius is: %f", celsiusConverter);
        printf("\nYour temperature in farenheit is: %f", farenheitConverter);
    }
    else {
        printf("Invalid input");
    }
}
