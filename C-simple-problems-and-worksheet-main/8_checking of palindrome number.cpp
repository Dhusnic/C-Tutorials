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
        sum= (sum*10)+rem;
        a=a/10;
    }
     
    if (an==sum)
        printf("it is a palindrome number");
    else 
        printf("it is not a palindrome number");
    return 0;
    
}
/*
 1221
 when it is reversed then also it is palindrme number (1221)
 355 is not a palindrome because when it get reverse (553) */