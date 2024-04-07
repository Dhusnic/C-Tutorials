#include<stdio.h>
#include<string.h>
int main()
{
    char str[25];
    int i;
    printf("enter the string =");
    scanf("%[^\n]s",&str);
    for ( i = 0; i <=strlen(str); i++)
    {
        if (str[i]>=97&&str[i]<=122)
        {
            str[i]=str[i]-32;
        }
        
    }
    printf("upper case letters : %s" , str);
    return 0;
    
    
}
/* lowercase letter lies between ascii value of 97 & 122
   subrtact with 32 will give uppercase of each lowercase
   data type of sentenses %[^\n]s for taking input and for out put %s is enough*/
