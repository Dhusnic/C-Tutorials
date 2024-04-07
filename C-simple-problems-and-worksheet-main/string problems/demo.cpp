#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,count;
    char str[25][25],temp[25];
    puts("enter the numder of strings or charecter = ");
    scanf("%d",&count);

    puts("enter the strings or charecters");
    for ( i = 0; i<=count; i++)
    {
        gets(str[i]);
    }
    for ( i = 0; i<=count; i++)
    {
        for ( j = j+1; j<=count; j++)
        {
            if (strcmp(str[i],str[j])>0)
            {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
            
        }
        
    }
    
    printf("order of sorted strings or charecter:  ");
    for ( i = 0; i <=count; i++)
    {
        puts(str[i]);
    }
    

     
    
}
/* lowercase letter lies between ascii value of 97 & 122
   subrtact with 32 will give uppercase of each lowercase
   data type of sentenses %[^\n]s for taking input and for out put %s is enough*/
