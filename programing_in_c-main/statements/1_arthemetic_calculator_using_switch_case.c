 #include<stdio.h>
 int main()
 {
     int a,b,c;
     printf("the inputs are = ");
     scanf("%d%d",&a,&b);
     printf("1.add \n2.subtraction\n3.multiply\n4.divide\n5.reminder\n enter the operation number = ");
     scanf("%d",&c);

      switch (c) {
            case 1:
                printf("addition of %d + %d = %d",a,b,a+b);
                break;
            case 2:
                printf("substraction of %d - %d = %d",a,b,a-b);
                break;
            case 3:
                printf("multiply of %d * %d = %d",a,b,a*b);
                break;
            case 4:
                printf("devide of %d / %d = %d",a,b,a/b);
                break;
            case 5:
                printf("reminder of  %d / %d = %d",a,b,a%b);
                break;


        }
        return 0;

      
}