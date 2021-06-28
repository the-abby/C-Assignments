#include<stdio.h>

void main()
{
    int code, mainmenu;
    int myoffer, myoffersubone, myoffersubtwo, myoffersubthree, myoffersubfour, myoffersubfive, myoffersubsix, myoffersubseven,     myoffersubeight;
    int data, databundles, databundlessubone, databundlessubtwo, databundlessubthree, databundlessubfour, databundlessubfive,    databundlessubsix, databundlessubseven;
    int dataweek, dataweekly, dataweeklyone, dataweeklytwo;
    int datamonth, datamonthlyone, datamonthlytwo, datamonthlythree, datamonthlyfour, datamonthlyfive;
    int social, socialdata;
    int sevendays;
    int gifting, friendno;
    int tvdata, tvdatasub;
    int bank;
    printf("Welcome to Airtel Line.\nPlease dial 141 for everything you need: ");
    scanf("%d", &code);

    if(code == 141) {
        system("cls");
        printf("1. My Offer\n");
        printf("2. Data Bundles\n");
        printf("3. N1500/6GB/7days\n");
        printf("4. Social Bundle\n");
        printf("5. Gifting & Sharing\n");
        printf("6. Video Packs\n");
        printf("7. Recharge from Bank\n");
        printf("8. Data Balance\n");
    }
    else {
        system("cls");
        printf("Invalid input");
    }
    printf("\nEnter The number of your choice from the list: ");
    scanf("%d", &mainmenu);

    if(mainmenu == 1) {
            system("cls");
        printf("1.1. 200MB/N100/Daily\n");
        printf("1.2. 400MB/N200/3Days\n");
        printf("1.3. 2GB/N500/Daily\n");
        printf("1.4. 1.5GB/N500/14-Days\n");
        printf("1.5. 3GB/N1000/Monthly\n");
        printf("1.6. 4GB/N1200/Monthly\n");
        printf("1.7. 6GB/N1500/Monthly\n");
        printf("1.8. 9GB/N2000/Monthly\n");
        printf("Choose your choice: ");
        scanf("%d", &myoffer);
        if(myoffer == 1) {
            system("cls");
            printf("200MB for 1Day at N100.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &myoffersubone);
            if(myoffersubone == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(myoffersubone == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(myoffer == 2) {
            system("cls");
            printf("400MB for 3Days at N200.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &myoffersubtwo);
            if(myoffersubtwo == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(myoffersubtwo == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(myoffer == 3) {
            system("cls");
            printf("2GB for 1Day at N500.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &myoffersubthree);
            if(myoffersubthree == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(myoffersubthree == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(myoffer == 4) {
            system("cls");
            printf("1.5GB for 14Days at N500.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &myoffersubfour);
            if(myoffersubfour== 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(myoffersubfour == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(myoffer == 5) {
            system("cls");
            printf("3GB for 1Month at N1000.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &myoffersubfive);
            if(myoffersubfive == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(myoffersubfive == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(myoffer == 6) {
            system("cls");
            printf("4GB for 1Month at N1200.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &myoffersubsix);
            if(myoffersubsix == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(myoffersubsix == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(myoffer == 7) {
            system("cls");
            printf("6GB for 1Month at N1500.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &myoffersubseven);
            if(myoffersubseven == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(myoffersubseven == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(myoffer == 8) {
            system("cls");
            printf("9GB for 1Month at N2000.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &myoffersubeight);
            if(myoffersubeight== 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(myoffersubeight == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else{
            system("cls");
            printf("Connection problem/invalid code");
        }
    }
    else if(mainmenu == 2) {
        system("cls");
        printf("2.1. Daily/Weekly\n");
        printf("2.2. Weekly Bundles\n");
        printf("2.3. Monthly Bundles\n");
        printf("2.4. Mega Bundles\n");
        printf("2.5. Binge Data Plans\n");
        printf("2.6. Big Data Plans\n");
        printf("2.7. Social Bundles\n");
        printf("2.8. Router Bundles\n");
        printf("Choose your choice: ");
        scanf("%d", &data);
        if(data == 1) {
            system("cls");
            printf("1.1. 400MB/N50/Daily\n");
            printf("1.2. 100MB/N100/Daily\n");
            printf("1.3. 200MB/N200/3Days\n");
            printf("1.4. 300MB/N300/7Days\n");
            printf("1.5. 750MB/N500/14days\n");
            printf("1.6. 1GB/N300/daily\n");
            printf("1.7. 2GB/N500/daily\n");
            printf("Choose your choice: ");
        scanf("%d", &databundles);
        if(databundles == 1) {
            system("cls");
            printf("200MB for 1Day at N100.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &databundlessubone);
            if(databundlessubone == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(databundlessubone == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(databundles == 2) {
            system("cls");
            printf("400MB for 3Days at N200.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &databundlessubtwo);
            if(databundlessubtwo == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(databundlessubtwo == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(databundles == 3) {
            system("cls");
            printf("2GB for 1Day at N500.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &databundlessubthree);
            if(databundlessubthree == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(databundlessubthree == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(databundles == 4) {
            system("cls");
            printf("1.5GB for 14Days at N500.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &databundlessubfour);
            if(databundlessubfour == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(databundlessubfour == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(databundles == 5) {
            system("cls");
            printf("3GB for 1Month at N1000.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &databundlessubfive);
            if(databundlessubfive == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(databundlessubfive == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(databundles == 6) {
            system("cls");
            printf("4GB for 1Month at N1200.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &databundlessubsix);
            if(databundlessubsix == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(databundlessubsix == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        else if(databundles == 7) {
            system("cls");
            printf("6GB for 1Month at N1500.\nWhat should happen when your bundle finishes?\n");
            printf("1. Continue browsing from airtime/160MB Extra\n2. Stop my data\n");
            printf("Choose your choice: ");
            scanf("%d", &databundlessubseven);
            if(databundlessubseven == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(databundlessubseven == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
        }
        }
        else if(data == 2) {
            system("cls");
            printf("1. N500/750MB/14days\n");
            printf("2. N500/1GB/7days\n");
            printf("Choose your choice: ");
        scanf("%d", &dataweek);
        if(dataweek == 1) {
            system("cls");
            printf("750MB for 14days at N500. What should happen when your bundle finishes?\n");
            printf("3.1. Continue browsing from airtime/160MB Extra\n");
            printf("3.2. Stop my data\n");
            printf("Choose your choice: ");
                scanf("%d", &dataweeklyone);
                if(dataweeklyone == 1) {
                    system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else if(dataweeklyone == 2) {
                    system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else {
                    system("cls");
                printf("Connection problem/invalid code");
                }
        }
        else if(dataweek == 2) {
            system("cls");
            printf("1GB for 7days at N500. What should happen when your bundle finishes?\n");
            printf("3.1. Continue browsing from airtime/160MB Extra\n");
            printf("3.2. Stop my data\n");
            printf("Choose your choice: ");
                scanf("%d", &dataweeklytwo);
                if(dataweeklytwo == 1) {
                    system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else if(dataweeklytwo == 2) {
                    system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else {
                    system("cls");
                printf("Connection problem/invalid code");
                }
        }
            }
        else if(data == 3) {
            system("cls");
            printf("1. N1000/1.5GB\n2. N2000/4.5GB\n3. N3000/10GB\n4. N4000/11GB\n5. N5000/20GB\nChoose your choice: ");
            scanf("%d", &datamonth);
            if(datamonth == 1){system("cls");
                printf("1.5GB/N1000. What should happen when your bundle finishes?\n1. Continue browsing from airtime/160MB Extra\n2. Stop my data\nChoose your choice: ");
                scanf("%d", &datamonthlyone);
                if(datamonthlyone == 1) {system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else if(datamonthlyone == 2) {
                    system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else {
                    system("cls");
                printf("Connection problem/invalid code");
                }
            }
                else if(datamonth == 2){
                    system("cls");
                printf("4.5GB/N2000. What should happen when your bundle finishes?\n1. Continue browsing from airtime/160MB Extra\n2. Stop my data\nChoose your choice: ");
                scanf("%d", &datamonthlytwo);
                if(datamonthlytwo == 1) {
                    system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else if(datamonthlytwo == 2) {
                    system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else {
                    system("cls");
                printf("Connection problem/invalid code");
                }
            }
                else if(datamonth == 3){
                    system("cls");
                printf("3GB/N1500. What should happen when your bundle finishes?\n1. Continue browsing from airtime/160MB Extra\n2. Stop my data\nChoose your choice: ");
                scanf("%d", &datamonthlythree);
                if(datamonthlythree == 1) {
                    system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else if(datamonthlythree == 2) {
                    system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else {
                    system("cls");
                printf("Connection problem/invalid code");
                }
            }
                else if(datamonth == 4){
                    system("cls");
                printf("11GB/N4000. What should happen when your bundle finishes?\n1. Continue browsing from airtime/160MB Extra\n2. Stop my data\nChoose your choice: ");
                scanf("%d", &datamonthlyfour);
                if(datamonthlyfour == 1) {
                    system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else if(datamonthlyfour == 2) {
                    system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else {
                    system("cls");
                printf("Connection problem/invalid code");
                }
            }
                else if(datamonth == 5){
                    system("cls");
                printf("20GB/N5000. What should happen when your bundle finishes?\n1. Continue browsing from airtime/160MB Extra\n2. Stop my data\nChoose your choice: ");
                scanf("%d", &datamonthlyfive);
                if(datamonthlyfive == 1) {
                    system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else if(datamonthlyfive == 2) {
                    system("cls");
                    printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
                }
                else {
                    system("cls");
                printf("Connection problem/invalid code");
                }
            }
        }

    }

    else if(mainmenu == 3) {
            system("cls");
        printf("6GB for 7 days at N1500. What should happen when your bundle finishes?\n");
        printf("3.1. Continue browsing from airtime/160MB Extra\n");
        printf("3.2. Stop my data\n");
        printf("# Back\n");
        printf("Menu\n");
        printf("Choose your choice: ");
            scanf("%d", &sevendays);
            if(sevendays == 1) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(sevendays == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
    }
    else if(mainmenu == 4) {
        system("cls");
        printf("4.1. All Social Bundle\n");
        printf("# Back\n");
        printf("0 Menu\n");
        printf("Choose your choice: ");
        scanf("%d", &social);
        if(social == 1) {
            system("cls");
        printf("600MB for 1month at N300. What should happen when your bundle finishes?\n");
        printf("3.1. Continue browsing from airtime/160MB Extra\n");
        printf("3.2. Stop my data\n");
        printf("Choose your choice: ");
        scanf("%d", &socialdata);
        if(socialdata == 1) {
            system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else if(socialdata == 2) {
                system("cls");
                printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
            }
            else {
                system("cls");
                printf("Connection problem/invalid code");
            }
    }
    }
    else if(mainmenu == 5) {
        system("cls");
        printf("6.1. Ask a friend\n");
        printf("6.2. Data Me2U\n");
        printf("# Back\n");
        printf("0 Menu\n");
        printf("Choose your choice: ");
        scanf("%d", &gifting);
        if(gifting == 1) {
                system("cls");
            printf("Here is a list some of your friends numbers.\n1. John\n2. Creed\n3. Dave.\n Choose one: ");
            scanf("%d", &friendno);
            if(friendno == 1) {
                    system("cls");
                printf("Your friend \"John\" is also out of data. Please HUSTLE for your own money.");
            }
            else if(friendno == 2) {
                    system("cls");
                printf("Your friend \"Creed\" has money but would not give you. Please HUSTLE for your own money.");
            }
            else if(friendno == 3) {
                    system("cls");
                printf("Your friend \"Dave\" is also out of data. Please HUSTLE for your own money.");
            }
            else {
                    system("cls");
                printf("Invalid mobile number");
            }
        }
        else if(gifting == 2) {
                system("cls");
            printf("Dear customer you are low on data. Please recharge in order to transfer to your friends");
        }

    }
    else if(mainmenu == 6) {
        printf("7.1. N100/500MB/Airtel Tv\n");
        printf("# Back\n");
        printf("0 Menu\n");
        printf("Choose your choice: ");
        scanf("%d", &tvdata);
        system("cls");
        printf("500MB/N100. What should happen when your bundle finishes?\n1. Continue browsing from airtime/160MB Extra\n2. Stop my data\nChoose your choice: ");
        scanf("%d", &tvdatasub);
        if(tvdatasub == 1) {
                system("cls");
        printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
        }
        else if(tvdatasub == 2) {
               system("cls");
            printf("Dear Customer You do not have sufficient airtime to buy this bundle.Please recharge and try again later.");
        }
        else {system("cls");
            printf("Connection problem/invalid code");
        }
    }
    else if(mainmenu == 7) {system("cls");
        printf("Minimum amount of N100 only\n");
        printf("Enter amount: ");
        scanf("%d", &bank);
        if(bank < 100) {system("cls");
            printf("The minimum amount for the transaction is N100. Please try again with a higher amount.");
        }
        else {system("cls");
            printf("Dear customer please link your number to your bank account in order to perform this transaction. Thank you.");
        }
    }
    else if(mainmenu == 8) {
            system("cls");
        printf("Dear Customer, You will receive an SMS of your data balance soon.\n");
    }
    else {
        system("cls");
        printf("Connection problem/Invalid code\n");
    }
}
