#include<stdio.h>

int main()
{
    int i;
    int j;
    for(i = 1; i <= 20; i++){
        for(j = 1; j <= i; j++) {
            printf("*");
        }
       printf("\n");
    }

    for(i = 20; i >=1; i--){
        for(j = 1; j <= i; j++) {
            printf("*");
        }
       printf("\n");
    }
}
