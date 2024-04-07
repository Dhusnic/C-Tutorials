  #include<stdio.h>
int main()
{
    int i,a[10],max,min,count,j,temp;
    printf("enter the number of elements = ");
    scanf("%d",&count);
    printf("enter the data of array = ");
    for (i = 0; i< count; i++)
    {
        scanf("%d",&a[i]);
    }
    for (i = 0; i < count-1; i++)
    {
         for(j=i+1;j<count;j++)
         {
             if(a[i]>a[j])
             {
                 temp=a[i];
                 a[i]=a[j];
                 a[j]=temp;
                 
             }
         }
    }
    printf("----------------------------------------------------\n");
    printf("the acending oder is = \n");
    for ( i = 0; i < count; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("----------------------------------------------------\n");
    printf("\nthe dcending oder is = \n");
    for ( i = count-1; i >= 0; i--)
    {
        printf("%d\n",a[i]);
        min=a[0];
        max=a[count-1];
    }
    
    printf("\nmin of array = %d\nmax of array = %d\n",min,max);
    
    

}