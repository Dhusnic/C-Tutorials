#include<stdio.h>
int main()
{
    int given_number ,fc=1,i;
    printf("the factorial of = ");
    scanf("%d",&given_number);
    for ( i = 0; i <= (given_number-1); i++)
    {
        fc=fc*(i+1);
        if (i==(given_number-1))
        {
            printf("%d \n",fc);
        }
        
        
        
        
    }
    
     
    
    return 0; 
}