  #include<stdio.h>
int main()
{
    int i,a[10],count,new,po;
    printf("enter the number of elements = ");
    scanf("%d",&count);
    printf("enter the data of array = ");
    for (i = 0; i< count; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the number you want to insert = ");
    scanf("%d",&new);
    printf("\nthe position you want to insert = ");
    scanf("%d\n",&po);
    for (i = count-1; i >= po-1; i--)
    {
        a[i+1]=a[i];
    }
    a[po-1]=new;
    printf("the inserted array  \n");
    for ( i = 0; i <= count; i++)
    {
        printf("%d \n",a[i]);
    }
    

}