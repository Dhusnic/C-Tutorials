   #include<stdio.h>
int main()
{
    int i,a[10],even,sum=0,count;
    printf("enter the number of elements = ");
    scanf("%d",&count);
    printf("enter the data of array = ");
    for (i = 0; i< count; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < count; i++)
    {
        if (i%2==0)
         {
             even=a[i];
             sum=sum+even;
             printf("even position numbers are = %d\n",even);
         }
          
    }
    
    printf("sum of even position numbers in array = %d ",sum);
    
    

}