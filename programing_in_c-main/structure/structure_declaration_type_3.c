#include<stdio.h>
struct  student
{
    char name[50];
    int  rn;
    float gpa;
};
int main()
{
    int i,n;
    struct student s[20];
    printf("ENTER THE NUMBER OF STUDENTS = ");
    scanf("%d",&n);
    for (  i = 0; i < n; i++)
    {
        printf("enter the name roll_number cgpa %d = ",i+1);
        scanf("%s%d%f",s[i].name,&s[i].rn,&s[i].gpa);
    }
    printf("NAME    ROLL_NO     GPA \n");
    for (  i = 0; i < n; i++)
    {
        printf("%s  %d     %.2f\n",s[i].name,s[i].rn,s[i].gpa);
    }
    
    
     
    
}
