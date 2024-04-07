#include<stdio.h>
#include<string.h>
int main()
{
    char a[100],b[200];
    int i,j;
    scanf("%s %s",a,b);
    for (i = 0; (a[i]==b[i]); i++)
    {
        if (a[i]=='\0')
        {
          //  j=0;
            break;
        }
        
    }
    j=a[i]-b[i];
    (j==0)?printf("equal"):(j>0)?printf("a>b"):printf("a<b");
}