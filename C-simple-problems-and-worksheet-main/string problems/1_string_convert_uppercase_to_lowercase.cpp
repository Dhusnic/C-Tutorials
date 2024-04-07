#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
    char str[25];
    int i;
    printf("enter the string : ");
    scanf("%s",str);
    for ( i = 0; i <= strlen(str); i++)
    {
        if (str[i]>=65&&str[i]<=90)
        {
            str[i]=str[i]+32;
        }
        
    }
    printf("lower case string is: %s ",str);
    return 0;
    
}
/* ACII value for A is 65 and for Z is 90
   the capital letters or uppercase letters arelies between 65 to 90
   addition of 32 will give the lower case letters*/
