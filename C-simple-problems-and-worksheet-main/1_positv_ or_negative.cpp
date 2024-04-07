#include<stdio.h>
int main()
{
    int input,func;
    printf("enter the number you want to check = ");
    scanf("%f",&input);
    if (input<0)
        printf("it is negative");
    else if (input>0)
        printf("it is positive");
    else
        printf("neither positive nor negative")
    return 0;


}