#include <stdio.h>
 void swap(int,int);
 int main()
 {
    int a,b;
    printf("enter the value of a and b = ");
    scanf("%d%d",&a,&b);
    swap(a,b);
    printf("after swap a = %d b = %d\n",a,b);
    return 0;
 }
void swap(int x,int y)
{
    x=x+y;
    y=x-y;
    x=x-y;
    printf("inside function a = %d  b = %d\n",x,y);

}

