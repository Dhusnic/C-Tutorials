#include<stdio.h>
#include<math.h>
int main()
{
    int a,b;
    printf("enter a number = ");
    scanf("%d",&a);
    b=a%2;
    if (b==0)
    {
        printf("it is even");
    }
    else
        printf("print odd");
    
    return 0;
    
}
/*
 1221
 when it is reversed then also it is palindrme number (1221)
 355 is not a palindrome because when it get reverse (553) */