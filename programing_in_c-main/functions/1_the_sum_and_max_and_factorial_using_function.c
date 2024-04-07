 #include <stdio.h>
 int add(int,int);//function prototype
 int max(int,int);//function prototype
 int fac(int);//function prototype
 int main()
 {
    int a,b;
    printf("enter the value of a and b = ");
    scanf("%d%d",&a,&b);
    printf("the sum a and b = %d\n",add(a,b));//function call
    printf("the max of a and b = %d\n",max(a,b));//function call
    printf("the factorial of a = %d\n",fac(a));//function call
    return 0;
 }
int add(int x,int y)//function declration
{
    return(x+y);
}
int max(int x , int y)//function declaration
{
    if(x>y)
    {
        return(x);
    }
    else
        return(y);
}
int fac(int x)//function declaration
{
    int facT=1,i;
    for ( i = 1; i <= x; i++)
    {
        facT=facT*i;
    }
    return(facT);
    
}