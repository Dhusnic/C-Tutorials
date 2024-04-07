#include<stdio.h>
int main(){
    float h,b,x,perimetre;
    printf("enter height,breath,thirdside of the triangle = ");
    scanf("%f %f %f",&h,&b,&x);
    printf("area of the triangle= %g \n",0.5*h*b);
    printf("prerimeter of the trinagle= %g \n",h+b+x);
    return 0;

}