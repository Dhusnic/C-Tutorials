 #include <stdio.h>
int fac(int);
int main()
{
    int a;
    printf("enter the number want to factorial =  ");
    scanf("%d",&a);
    printf("%d",fac(a));
    return 0;
} 
int fac(int x)
{
    if (x==1||x==2)
    {
        return 1;
    }
    else
       return(x*fac(x-1));
    
}
