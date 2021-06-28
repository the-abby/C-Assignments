#include<stdio.h>

void main()
{
    FILE *f;
    int code, code_one_one;
    char s;

    printf("Welcome to Airtel Line.\nPlease dial 121 for everything you need: ");
    scanf("%d", &code);
//    clrscr();

    switch(code)
    {
    case (121):
//        printf("1. NIN\n");
//        printf("2. Buy Bundles & Services\n");
//        printf("3. Manage My Account\n");
//        printf("4. Borrow Credit & other self services\n");
        printf("Please wait.........\n\n\n");
        f =fopen("ussd.txt","r");
        while((s=fgetc(f))!=EOF) {
            printf("%c", s);
        }
        fclose(f);
//        getch();
        break;
    default:
        printf("Invalid code");
    }
    printf("Enter your desired number: ");
    scanf("%d", &code_one_one);

    switch (code_one_one)
    {
    case 1:
        printf("Please insert your Government approved 11 digit NIN number: ");
        break;
    case 2:
        printf("Please wait.........\n\n\n");
        f =fopen("code1_1.txt","r");
        while((s=fgetc(f))!=EOF) {
            printf("%c", s);
        }
        fclose(f);
        break;
    default:
        printf("Invalid input");
    }
}
