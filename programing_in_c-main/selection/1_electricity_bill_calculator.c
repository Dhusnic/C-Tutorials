#include<stdio.h>
int main()
{
    int u;
    printf("enter the unit = ");
    scanf("%d",&u);
    if (u<=100)
    {
        printf("the bill ammount is 0");
    }
    else if(u<500)
    {
       printf("the bill amount is %d",u*5);
    }
    else if(u>=500)
    {
        printf("the bill amount is %d",u*15);
    }
    
    return 0;
}