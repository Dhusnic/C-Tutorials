#include<stdio.h>
int main()
{


 char a[20],*lp,*rp;
 scanf("%s",a);
 lp=a;
 rp=a;
 while(*rp)
 {
    rp++;
 }
 printf("%d",(rp-lp));   
    
     
    

}