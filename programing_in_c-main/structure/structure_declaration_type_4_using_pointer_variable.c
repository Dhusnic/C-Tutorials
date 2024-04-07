 #include<stdio.h>
struct  student
{
    char name[50];
    int  rn;
    float gpa;
};
int main()
{
    struct student s,*s1;
    s1=&s;
    printf("enter the name roll_number cgpa = ");
    scanf("%s%d%f",s1->name,&s1->rn,&s1->gpa);
    printf("NAME    ROLL_NO     GPA \n");
    printf("%s  %d     %.2f",s1->name,s1->rn,s1->gpa);
     
    
}
