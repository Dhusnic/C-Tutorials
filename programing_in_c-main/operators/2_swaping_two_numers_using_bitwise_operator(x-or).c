 #include<stdio.h>
 int main()
 {
    /*
     a  b  a^b a&b a|b  ~a  ~b 
     0   0  0   0   0   1   1
     1   0  1   0   1   0   1
     0   1  1   0   1   1   0
     1   1  0   1   1   0   0
     */
     int a,b,c;
     printf("before swap = ");
     scanf("%d %d",&a,&b);
    a=a^b;
    b=a^b;
    a=a^b;
    printf("after swap = %d %d",a,b);
    return 0;



 }