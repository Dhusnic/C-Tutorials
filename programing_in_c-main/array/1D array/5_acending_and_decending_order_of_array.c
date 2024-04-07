 #include<stdio.h>
int main()
{
    int i,a[7],j,count,temp;
    printf("enter the number of elements");
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
    printf("the dcending oder is = \n");
    for ( i = count-1; i >= 0; i--)
    {
        printf("%d\n",a[i]);
    }

    
    
    

}