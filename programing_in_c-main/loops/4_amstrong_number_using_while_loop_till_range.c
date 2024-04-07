#include<stdio.h>
#include<math.h>
int main()
{
    int a,rem,an,am,j,s,f,sum,count;
    printf("enter a sarting range = ");
    scanf("%d",&s);
    printf("enter a ending range = ");
    scanf("%d",&f);
    for (j=s; j<=f; j++)
    {
        an=j;
        am=j;
        sum=0;
        count=0;
        while(an>0)
        {
            rem=an%10;
            an=an/10;
            count=count+1;
        }
        while (am>0)
        {
            rem=am%10;
            sum=sum+pow(rem,count);
            am=am/10;
        }
        if (j==sum)
            printf("%d\n",sum);
         
    }
    return 0;
    
}
