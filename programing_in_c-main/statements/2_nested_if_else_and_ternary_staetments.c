 #include<stdio.h>
 int main()
 {
     /*
      ternanry opearator
     */
     int a,b,c;
     printf("the inputs are = ");
     scanf("%d%d%d",&a,&b,&c);
     //nested if
     if (a>b&&a>c)
     {
        printf("a = %d is greater \n",a);
     }
     else if(b>c)
     {
         printf("b = %d is greater \n",b);
     }
     else
     {
         printf("c = %d is greater \n",c);
     }
     //nested ternary
     (a>b&&a>c)?printf("a = %d is greater \n",a):(b>c)?printf("b = %d is greater \n",b):printf("c = %dis greater \n",c);

      
}