#include<stdio.h>
struct  student
{
    char name[50];
    int  rn;
    float gpa;
}s;
int main()
{
    //struct student s;
    printf("enter the name roll_number cgpa = ");
    scanf("%s%d%f",s.name,&s.rn,&s.gpa);
    printf("NAME    ROLL_NO     GPA \n");
    printf("%s  %d     %.2f",s.name,s.rn,s.gpa);
     
    
}
