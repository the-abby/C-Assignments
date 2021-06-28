#include<stdio.h>

void main()
{
    FILE *f;
    int code, mainmenu;
    char s;

    printf("Welcome to Airtel Line.\nPlease dial 141 for everything you need: ");
    scanf("%d", &code);
//    clrscr();

    switch(code)
    {
    case (141):
//        printf("\n\nPlease wait.........\n\n\n");
//        f =fopen("mainmenu.txt","r");
//        while((s=fgetc(f))!=EOF) {
//            printf("%c", s);
//        }
//        fclose(f);
        printf("1. My Offer\n");
        printf("2. Data Bundles\n");
        printf("3. N1500/6GB/7days\n");
        printf("4. Social Bundle\n");
        printf("5. Binge Plan\n");
        printf("6. Gifting & Sharing\n");
        printf("7. Video Packs\n");
        printf("8. Recharge from Bank\n");
        printf("9. Data Balance\n");
        break;
    default:
        printf("Invalid code");
    }

    printf("Enter The number of your choice from the list: ");
    scanf("%d", &mainmenu);

    switch(mainmenu)
    {
    case 1:
//        printf("\n\nPlease wait.........\n\n\n");
//        f =fopen("myoffer.txt","r");
//        while((s=fgetc(f))!=EOF) {
//            printf("%c", s);
//        }
//        fclose(f);
        printf("1.1. 200MB/N100/Daily\n");
        printf("1.2. 400MB/N200/3Days\n");
        printf("1.3. 2GB/N500/Daily\n");
        printf("1.4. 1.5GB/N500/14-Days\n");
        printf("1.5. 3GB/N1000/Monthly\n");
        printf("1.6. 4GB/N1200/Monthly\n");
        printf("1.7. 6GB/N1500/Monthly\n");
        printf("1.8.  9GB/N2000/Monthly\n");
    case 2:
        printf("2.1. Daily/Weekly\n");
        printf("2.2. Weekly Bundles\n");
        printf("2.3. Monthly Bundles\n");
        printf("2.4. Mega Bundles\n");
        printf("2.5. Binge Data Plans\n");
        printf("2.6. Big Data Plans\n");
        printf("2.7. Social Bundles\n");
        printf("2.8. Router Bundles\n");
    case 3:
        printf("6GB for 7 days at N1500. What should happen when your bundle finishes\n?");
        printf("3.1. Continue browsing from airtime/160MB Extra");
        printf("3.2. Stop my data");
        printf("# Back");
        printf("Menu");
    }
}
