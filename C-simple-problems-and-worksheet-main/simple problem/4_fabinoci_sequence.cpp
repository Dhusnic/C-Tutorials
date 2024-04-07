#include<stdio.h>
int main()
{
    int num_terms,first_term=0,second_terms=1,i,fb;
    printf("the terms for fabinocie = ");
    scanf("%d",&num_terms);
    for( i = 0; i < num_terms; i++)
    {
         fb=first_term+second_terms;
         first_term=second_terms;
         second_terms=fb;
         printf("%d \n",fb);
        
    }
    
    return 0; 
}