#include<stdio.h>

int main(void)
{

    int num;
// this program for check the number is positive or not positive .
    printf("Enter an integer:");
    scanf("%d",&num);

    if(num<0)
    {
        printf("Number is negative.");

    }
    else
    {

        printf("Number is non-negative");
    }
    return 0;
}
