   #include<stdio.h>
int main()
{
    int i,a[10],key,count,flag=0,po;
    printf("enter the number of elements = ");
    scanf("%d",&count);
    printf("enter the data of array = ");
    for (i = 0; i< count; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter the key = ");
    scanf("%d",&key);
    for (i = 0; i < count; i++)
    {
         if(a[i]==key)
         {
             flag=1;
             po=i;
         }          
    }
    
    if (flag==1)
    {
        printf("it %d key is present at %d",key,po+1);
    }
    
    
    

}