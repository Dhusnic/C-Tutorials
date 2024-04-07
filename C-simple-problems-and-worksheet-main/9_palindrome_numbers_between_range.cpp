#include<stdio.h>
#include<math.h>
int main()
{
    int a,rem,sum,start,end,i,an,temp;
    printf("enter a number = ");
    scanf("%d",&start);
    printf("\n");
    printf("enter the the final range = ");
    scanf("%d",&end);
    
    for ( a = start; a<=end; a++)
    {
       temp = a;
       sum=0;
        while (temp)
        {
            rem=temp%10;
            sum= (sum*10)+rem;
            temp=temp/10;
            
            
        }
        if (a==sum)
             printf("%d \n",a);

    }
    return 0;
    
}
/*
 1221
 when it is reversed then also it is palindrme number (1221)
 355 is not a palindrome because when it get reverse (553) */