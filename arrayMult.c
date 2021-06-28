#include<stdio.h>

int main()
{
    int nums[15];
    int disp;
    int two;
    printf("Enter 15 different numbers: \n");
    for(disp = 0; disp <15; disp++){
        printf("Enter %d \n", disp);
        scanf("%d", &nums[disp]);
    }
    for(disp = 0; disp <15; disp++){
        printf("%d = ", disp);
        two = (nums[disp]) * (2);
        printf("[%d] *2 = [%d]", nums[disp] , two );
        printf("\n");
    }
}
