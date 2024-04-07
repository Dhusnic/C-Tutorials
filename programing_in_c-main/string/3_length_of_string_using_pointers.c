#include<stdio.h>
int main()
{
    char a[100],*p;
    int i;
    p=a;
    scanf("%s",a);
    while(*p++){i++;};
    printf("%d",i);
}