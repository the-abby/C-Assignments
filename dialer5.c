#include<stdio.h>

void main()
{
    void mainmenu() {
    printf("1. My Offer\n");
    printf("2. Data Bundles\n");
    printf("3. N1500/6GB/7days\n");
    printf("4. Social Bundle\n");
    printf("5. Gifting & Sharing\n");
    printf("6. Video Packs\n");
    printf("7. Recharge from Bank\n");
    printf("8. Data Balance\n");
    printf("Your choice: ");
////    scanf("%d", &ussd);
}
    char choice[10];
    int ussd;
    printf("Enter the ussd code for Airtel: ");
    scanf("%s",&choice);
    if(strcmp(choice,"*141#")==0){
        system("cls");
        mainmenu();
        scanf("%d", &ussd);
        if(ussd == 1){
            system("cls");
            printf("1.1. 200MB/N100/Daily\n");
            printf("1.2. 400MB/N200/3Days\n");
            printf("1.3. 2GB/N500/Daily\n");
            printf("1.4. 1.5GB/N500/14-Days\n");
            printf("1.5. 3GB/N1000/Monthly\n");
            printf("1.6. 4GB/N1200/Monthly\n");
            printf("1.7. 6GB/N1500/Monthly\n");
            printf("1.8. 9GB/N2000/Monthly\n");
            printf("0. Back\n");
            printf("Choose your choice: ");
            scanf("%d", &ussd);
            if(ussd == 1){
                system("cls");
                printf("200MB for 1Day at N100.\nWhat should happen when your bundle finishes?\n");
                printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n0. Back\n");
                printf("Choose your choice: ");
                scanf("%d", &ussd);
            }
            else if(ussd == 2){
                system("cls");
                printf("400MB for 3Days at N200.\nWhat should happen when your bundle finishes?\n");
                printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
                printf("Choose your choice: ");
                scanf("%d", &ussd);
            }
            else if(ussd == 3){
                system("cls");
                printf("2GB for 1Day at N500.\nWhat should happen when your bundle finishes?\n");
                printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
                printf("Choose your choice: ");
                scanf("%d", &ussd);
            }
            else if(ussd == 4){
                system("cls");
                printf("1.5GB for 14Days at N500.\nWhat should happen when your bundle finishes?\n");
                printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
                printf("Choose your choice: ");
                scanf("%d", &ussd);
            }
            else if(ussd == 6){
                system("cls");
                printf("3GB for 1Month at N1000.\nWhat should happen when your bundle finishes?\n");
                printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
                printf("Choose your choice: ");
                scanf("%d", &ussd);
            }
            else if(ussd == 7){
                system("cls");
                printf("4GB for 1Month at N1200.\nWhat should happen when your bundle finishes?\n");
                printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
                printf("Choose your choice: ");
                scanf("%d", &ussd);
            }
            else if(ussd == 8){
                system("cls");
                printf("6GB for 1Month at N1500.\nWhat should happen when your bundle finishes?\n");
                printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
                printf("Choose your choice: ");
                scanf("%d", &ussd);
            }
            else if(ussd == 0){
                system("cls");
                mainmenu();
            }
        }

        else {
            printf("Invalid ussd code");
        }









    }
    else {
        printf("Invalid ussd code");
    }


}

