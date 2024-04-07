 #include<stdio.h>
 int main()
 {
     int n,rem,sum=0,m;
   scanf("%d",&n);
   m=n;
   while(n>0)
   {
       rem=n%10;
       sum=(sum*10)+rem;
       n=n/10;


   }
    if (m==sum)
    {
       printf("%d is a palindrome number\n",m);
   }
   else
        printf("%d is not a palindrome  number\n",m);
   

      
}