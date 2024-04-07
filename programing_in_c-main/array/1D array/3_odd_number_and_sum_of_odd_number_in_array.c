  #include<stdio.h>
int main()
{
    int i,a[10],odd,sum=0,count;
    printf("enter the number of elements = ");
    scanf("%d",&count);
    printf("enter the data of array = ");
    for (i = 0; i< count; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < count; i++)
    {
        if (a[i]%2!=0)
         {
             odd=a[i];
             sum=sum+odd;
             printf("odd numbers are = %d\n",odd);
         }
          
    }
    
    printf("sum of add numbers in array = %d ",sum);
    
    

}