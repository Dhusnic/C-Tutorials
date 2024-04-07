 #include<stdio.h>
 int main()
 {
     /*                                    if          else
                                            |            |
      ternanry opearator [(condition)?(fuction 1):(function 2);]
     */
     int a,b;
     printf("the inputs are = ")
     scanf("%d%d",&a,&b);
     (a>b)?printf("a = %d is big \n",a):printf("b = %d is big \n",b);
     ((a&1)==0)?printf("a = %d is even\n" , a):printf("a = %d is odd \n",a);
     (a>0)?printf("a = %d is positive\n",a):printf("a = %d is negative\n" ,b);
     (a%4==0)?printf("a = %d is leap year\n",a):printf("a = %d is not a leapyear\n" ,b);
     (a>=18)?printf("a = %d is eligible to vote\n",a):printf("a = %d is not eligible to vote\n" ,b);
}