#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[200],*p;
    int i;
    p=a;
    scanf("%s %s",a,b);
    i=strcmp(a,b);
    (i==0)?printf("equal"):(i>0)?printf("a>b"):printf("a<b");
}