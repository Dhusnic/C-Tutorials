#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter num1 num2 num3  = ");
    scanf("%d %d %d",&num1 ,&num2 ,&num3);
    if (num1>num2 and num1>num3)
        printf("the number 1 is greater(%d)",num1);
    else if (num2>num1 and num2>num3)
        printf("the number 2 is greater(%d)",num2);
    else if (num3>num2 and num3>num1)
        printf("the number 3 is greater(%d)",num3);
    return 0;
}