#include<stdio.h>
int main()
{
    int i,a[7],b;
    printf("enter the data of array = ");
    for (i = 0; i<5; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i<5; i++)
    {
        printf("%d \n",a[i]);
    }
     
     for (  i = 0; i < 5; i++)
     {
         b=b+a[i];
     }
     printf("sum of array = %d",b);
    

}