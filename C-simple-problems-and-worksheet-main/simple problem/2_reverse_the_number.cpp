#include<stdio.h>
int main()
{
    int num,rev_num,rem;
    printf("enter correct number = ");
    scanf("%d",&num);
    while(num>=1)
    {
        rem=num%10;
        rev_num=(rev_num*10)+rem;
        num=num/10;
    }
    printf("\n %d",rev_num);
    return 0;

}
/*if the number is 765
  rem=num%10 
  reminder when 765 divide by 10 is 5
  rev_num=(rev_num*10)+rem
  then 0*10+5 = 5
  num =num/10 gives 765 to 76/*