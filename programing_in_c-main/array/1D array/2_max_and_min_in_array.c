 #include<stdio.h>
int main()
{
    int i,a[7],max,min,count;
    printf("enter the number of elements");
    scanf("%d",&count);
    printf("enter the data of array = ");
    for (i = 0; i< count; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the array elements are = \n");
    for (i = 0; i < count; i++)
    {
        printf("%d \n",a[i]);
        if (a[0]<a[i])
         {
             max=a[i];
         }
         if (a[0]>a[i])
         {
            min=a[i];
         }
    }
    printf("min of array = %d\nmax of array = %d",min,max);
    
    

}