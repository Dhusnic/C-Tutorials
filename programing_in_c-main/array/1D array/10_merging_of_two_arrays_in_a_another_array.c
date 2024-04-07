  #include<stdio.h>
int main()
{
    int i,a[10],b[10],c[20],counta,countb,count,po;
    printf("enter the number of elements in a = ");
    scanf("%d",&counta);
    printf("enter the data of array(a) = ");
    for (i = 0; i< counta; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the number of elements in b = ");
    scanf("%d",&countb);
    printf("enter the data of array(b) = ");
    for (i = 0; i< countb; i++)
    {
        scanf("%d",&b[i]);
    }
    count=counta+countb;
    printf("the merged array = ");
    for ( i = 0; i < counta; i++)
    {
        c[i]=a[i];
    }
    for ( i = 0; i < countb; i++)
    {
        c[i+counta]=b[i];
    }
    for ( i = 0; i < count; i++)
    {
        printf("%d\n",c[i]);
    }
    
    
    
    

}