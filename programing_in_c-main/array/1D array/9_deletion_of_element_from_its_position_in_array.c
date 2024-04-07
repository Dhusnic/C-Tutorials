  #include<stdio.h>
int main()
{
    int i,a[10],count,po;
    printf("enter the number of elements = ");
    scanf("%d",&count);
    printf("enter the data of array = ");
    for (i = 0; i< count; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the position you want to insert = ");
    scanf("%d",&po);
    for (i = po-1; i < count; i++)
    {
        a[i]=a[i+1];
    }
    printf("the inserted array  \n");
    for ( i = 0; i < count-1; i++)
    {
        printf("%d \n",a[i]);
    }
    

}