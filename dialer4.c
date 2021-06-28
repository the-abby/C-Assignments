#include<stdio.h>

void main()
{
    char choice[10];
    int ussd;
    printf("Enter the USSD code: ");
    scanf("%s", &choice);
    if(strcmp(choice,"*141#")== 0){
        printf("Enter the USSD code: ");
        system("cls");
        mainmenu();
//        scanf("%d", &ussd);
        if(ussd == 1) {
            mainmenu();
            system("cls");
            myOffer();
            scanf("%d", &ussd);
            if(ussd == 1) {
                system("cls");
                myOffer1();
                scanf("%d", &ussd);
            }
            else if(ussd == 2) {
                system("cls");
                myOffer2();
                scanf("%d", &ussd);
            }
            else if(ussd == 3) {
                system("cls");
                myOffer3();
                scanf("%d", &ussd);
            }
            else if(ussd == 4) {
                system("cls");
                myOffer4();
                scanf("%d", &ussd);
            }
            else if(ussd == 5) {
                system("cls");
                myOffer5();
                scanf("%d", &ussd);
            }
            else if(ussd == 6) {
                system("cls");
                myOffer6();
                scanf("%d", &ussd);
            }
            else if(ussd == 7) {
                system("cls");
                myOffer7();
                scanf("%d", &ussd);
            }
            else if(ussd == 8) {
                system("cls");
                myOffer8();
                scanf("%d", &ussd);
            }
            else if(ussd == 99) {
                system("cls");
                mainmenu();
            }



        }
        else if(ussd == 2) {
            system("cls");
            dataBundles();
            scanf("%d", &ussd);
        }
        else if(ussd == 3) {
            system("cls");
            oneWeek();
            scanf("%d", &ussd);
        }
        else if(ussd == 4) {
            system("cls");
            socialBundle();
            scanf("%d", &ussd);
        }
        else if(ussd == 5) {
            system("cls");
            dataGifting();
            scanf("%d", &ussd);
        }
        else if(ussd == 6) {
            system("cls");
            airtelTv();
            scanf("%d", &ussd);

        }
        else if(ussd == 7) {
            system("cls");
            bankRecharge();
            scanf("%d", &ussd);
        }
        else if(ussd == 8) {
            bankRecharge();
            system("cls");
            dataBalance();
        }
        else {
            printf("Please enter a valid number.");
        }

    }

    else {
        printf("Invalid USSD code.");
    }
}
void mainmenu() {
    int ussd;
    printf("1. My Offer\n");
    printf("2. Data Bundles\n");
    printf("3. N1500/6GB/7days\n");
    printf("4. Social Bundle\n");
    printf("5. Gifting & Sharing\n");
    printf("6. Video Packs\n");
    printf("7. Recharge from Bank\n");
    printf("8. Data Balance\n");
    printf("Your choice: ");
    scanf("%d", &ussd);
}
void myOffer() {
    printf("1.1. 200MB/N100/Daily\n");
    printf("1.2. 400MB/N200/3Days\n");
    printf("1.3. 2GB/N500/Daily\n");
    printf("1.4. 1.5GB/N500/14-Days\n");
    printf("1.5. 3GB/N1000/Monthly\n");
    printf("1.6. 4GB/N1200/Monthly\n");
    printf("1.7. 6GB/N1500/Monthly\n");
    printf("1.8. 9GB/N2000/Monthly\n");
    printf("99. Back\n");
    printf("Choose your choice: ");
}
void dataBundles() {
    printf("2.1. Daily/Weekly\n");
    printf("2.2. Weekly Bundles\n");
    printf("2.3. Monthly Bundles\n");
    printf("2.4. Mega Bundles\n");
    printf("2.5. Binge Data Plans\n");
    printf("2.6. Big Data Plans\n");
    printf("2.7. Social Bundles\n");
    printf("2.8. Router Bundles\n");
    printf("Choose your choice: ");
}
void oneWeek() {
    printf("6GB for 7 days at N1500. What should happen when your bundle finishes?\n");
    printf("1. Continue browsing from airtime/160MB Extra\n");
    printf("2. Stop my data\n");
    printf("99. Back\n");
    printf("0. Menu\n");
    printf("Choose your choice: ");
}
void socialBundle() {
    printf("4.1. All Social Bundle\n");
    printf("# Back\n");
    printf("0 Menu\n");
    printf("Choose your choice: ");
}
void dataGifting() {
    printf("6.1. Ask a friend\n");
    printf("6.2. Data Me2U\n");
    printf("# Back\n");
    printf("0 Menu\n");
    printf("Choose your choice: ");
}
void airtelTv() {
    printf("7.1. N100/500MB/Airtel Tv\n");
    printf("# Back\n");
    printf("0 Menu\n");
    printf("Choose your choice: ");
}
void bankRecharge() {
    printf("Minimum amount of N100 only\n");
    printf("Enter amount: ");
}
void dataBalance() {
    printf("Dear Customer, You will receive an SMS of your data balance soon.\n");
}


//MY OFFER SUBS
void myOffer1() {
    printf("200MB for 1Day at N100.\nWhat should happen when your bundle finishes?\n");
    printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
    printf("Choose your choice: ");
}
void myOffer2() {
    printf("400MB for 3Days at N200.\nWhat should happen when your bundle finishes?\n");
    printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
    printf("Choose your choice: ");
}
void myOffer3() {
    printf("2GB for 1Day at N500.\nWhat should happen when your bundle finishes?\n");
    printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
    printf("Choose your choice: ");
}
void myOffer4() {
    printf("1.5GB for 14Days at N500.\nWhat should happen when your bundle finishes?\n");
    printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
    printf("Choose your choice: ");
}
void myOffer5() {
    printf("3GB for 1Month at N1000.\nWhat should happen when your bundle finishes?\n");
    printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
    printf("Choose your choice: ");
}
void myOffer6() {
    printf("4GB for 1Month at N1200.\nWhat should happen when your bundle finishes?\n");
    printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
    printf("Choose your choice: ");
}
void myOffer7() {
    printf("6GB for 1Month at N1500.\nWhat should happen when your bundle finishes?\n");
    printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
    printf("Choose your choice: ");
}
void myOffer8() {
    printf("9GB for 1Month at N2000.\nWhat should happen when your bundle finishes?\n");
    printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n99. Back\n0. Menu");
    printf("Choose your choice: ");
}
