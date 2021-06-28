#include<stdio.h>

int main()
{
    int a[3][3] = {
        {8,7,10},
        {15,20,1},
        {10,10,10}
    };
    int b[3][3] = {
        {1,1,1},
        {0,2,1},
        {3,3,3}
    };
    int i , j, add[3][3], sub[3][3], divide[3][3];
    printf("The matrix of A is \n\n");
    for(i = 0; i< 3; i++) {
        for(j = 0; j< 3; j++) {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    printf("The matrix of B is \n\n");
    for(i = 0; i< 3; i++) {
        for(j = 0; j< 3; j++) {
            printf("%d\t", b[i][j]);
        }
        printf("\n");
    }
    printf("\n\n");
    printf("The matrix of A+B is \n\n");
    for(i = 0; i<3; i++) {
        for(j = 0; j < 3; j++) {
            add[i][j] = a[i][j] + b[i][j];
            printf("%d\t", add[i][j]);
        }
        printf("\n");
    }
      printf("\n\n");
      printf("The matrix of A-B is \n\n");
    for(i = 0; i<3; i++) {
        for(j = 0; j < 3; j++) {
            sub[i][j] = a[i][j] - b[i][j];
            printf("%d\t", sub[i][j]);
        }
        printf("\n");
    }
      printf("\n\n");
      printf("The matrix of A/B is \n\n");
    for(i = 0; i<3; i++) {
        for(j = 0; j < 3; j++) {
            divide[i][j] = a[i][j] / b[i][j];
            printf("%d\t", divide[i][j]);
        }
        printf("\n");
    }


}
