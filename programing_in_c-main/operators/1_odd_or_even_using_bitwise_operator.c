#include<stdio.h>
int main()
{
    /*
     a  b  a^b a&b a|b  ~a  ~b 
     0   0  0   0   0   1   1
     1   0  1   0   1   0   1
     0   1  1   0   1   1   0
     1   1  0   1   1   0   0
    */
    int a;
    printf("input number = ");
    scanf("%d",&a);
    if((a&1)==0)
    {
        printf("it is even");
    }
    else 
    {
        printf("it is odd");
    }

}