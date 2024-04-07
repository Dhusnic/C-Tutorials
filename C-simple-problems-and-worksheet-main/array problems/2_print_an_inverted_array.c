#include<stdio.h>
int main()
{
    int a[5],i,j;
    for(i=0;i<=4;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("--------------------------correct array------------------------------------\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("------------------------inverted array--------------------------\n");
    for(i=4;i>=0;i--)
    {
        
        printf("%d\n",a[i]);
        
    }
    return 0;
    
}
     