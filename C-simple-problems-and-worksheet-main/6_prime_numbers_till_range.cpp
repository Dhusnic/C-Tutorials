#include<stdio.h>
int main()
{
    int range,c,n,i;
    printf("enter range = ");
    scanf("%d",&range);
    for ( i = 1; i <= range; i++)
    {
        c=0;
        for ( n = 1; n <= i; n++)
        {
            if ( i%n==0)
            {
                c++;
            }
           
            
            
        }
        if (c<=2)
        {
                printf("%d \n",i);
         }
    }
    
     
    
     
    
    return 0; 
}