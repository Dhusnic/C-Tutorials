#include <stdio.h>
int facb(int);
int main()
{
     int n,i;
    printf("enter the number want to fabinoci =  ");
    scanf("%d",&n);
    for (  i = 2; i < n; i++)
    {
        printf("%d\n",facb(i));
    }
    
    

    return 0;
} 
int facb(int n)
{   
    if(n==1||n==2)
     return 1;
    else
        return(facb(n-1)+facb(n-2));    
}
