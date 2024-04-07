#include<stdio.h>
int main()
{  /*bitwise operators
    (~ - complement or inverse,
    & - and ,
    | - or,
    ^ - xor,
    &1 - 1's complement,
    &2 - 2's complement,
    )
    */
   
   /*
     a  b  a^b a&b a|b  ~a  ~b 
     0   0  0   0   0   1   1
     1   0  1   0   1   0   1
     0   1  1   0   1   1   0
     1   1  0   1   1   0   0
    */
    int a=5,b=10;
    printf("the ~a = ");
    printf("%d\n",~a );
    printf("the a&b = ");
    printf("%d\n",a&b);
    printf("the a|b = ");
    printf("%d\n",a|b);
    printf("the a^b = ");
    printf("%d\n",a^b);
    printf("the ones complement of  a&1 = ");
    printf("%d\n",a&1);
    printf("the twos complement of a&2 = ");
    printf("%d\n",a&2);
}