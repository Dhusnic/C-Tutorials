#include<stdio.h>
int inc(int target,int count)
{
    
    if (count>target)
    {
        return 0;
    }
    printf("%d\n",count);
    count++;
    inc(target,count);
    
    
    
}
int main()
{
    int count=0;
    int target;
    printf("ENTER THE NUMBER TILL THEY WANT TO PRINT");
    scanf("%d",&target);
    inc(target,count);
}