#include<stdio.h>
#include<math.h>
int main()
{
    float c ,f ;
    printf("enter farenhiet  = ");
    scanf("%f",&f);
    c=(5*(f-32))/9;
    printf("the farenheit = %4.f",f);
    printf("\n");
    printf("the cecius = %4.f",c);
    return 0;
}