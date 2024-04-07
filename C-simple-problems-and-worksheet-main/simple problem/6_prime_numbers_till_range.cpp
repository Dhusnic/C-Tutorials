#include<stdio.h>
int main()
{
    int range,numbers=0,pri,i;
    printf("enter range = ");
    scanf("%d",&range);
    for ( i = 0; i <= range; i++)
    {
        
        pri=numbers%2;
        if ( pri!=0 or numbers==2)
        {
            printf("%d \n",numbers);
        }
        numbers = numbers+1;
    }
    
     
    
     
    
    return 0; 
}