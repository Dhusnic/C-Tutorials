#include<stdio.h>
#include<math.h>
int main()
{
    int a,rem,sum,an;
    printf("enter a number = ");
    scanf("%d",&a);
    an=a;
    while (a!=0)
    {
        rem=a%10;
        sum=sum+(rem*rem*rem);
        a=a/10;
    }
    if (an==sum)
        printf("it is a amstrong number");
    else 
        printf("it is not a amstrong number");
    return 0;
    
}
/*
370
3*3*3+7*7*7+0*0*0
27+343+0
370 (it is a amstrong number)*/