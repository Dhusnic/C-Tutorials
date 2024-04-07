 #include <stdlib.h>
#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp =fopen("D:/studies/programing/c or c++ projects/programing in c/structure/input1.txt","w");
    fprintf(fp,"Coding challenges are tests sent to potential employees by a company typically to serve as a zero or first round interview to get initial technical/coding signal on candidates. They are most often given to new graduates or interns, but anyone may be subject to a coding challenge");
    fclose(fp);
    char str[100];
    fp= fopen("D:/studies/programing/c or c++ projects/programing in c/structure/input1.txt","a");
    scanf("%[^\n]",str);  //new string 
    fprintf(fp,str);
    fclose(fp);
    fp =fopen("D:/studies/programing/c or c++ projects/programing in c/structure/input1.txt","r");
    while((c =getc(fp))!=EOF){
        printf("%c",c);

    }
fclose(fp);
return 0;
}