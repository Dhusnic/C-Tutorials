#include <stdio.h>
int a=0,b=1;
int facb();
int main()
{
     int n,i;
    printf("enter the number want to facbinoci =  ");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for (  i = 2; i < n; i++)
    {
        printf("%d\n",facb());
    }
    
    

    return 0;
} 
int facb()
{   
    int temp;
    temp=a+b;
    a=b;
    b=temp;
    return(temp);
    
    
       
    
}
