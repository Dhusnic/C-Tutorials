#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    char c;
    char inputstring[100];
    fp =fopen("D:/studies/programing/c or c++ projects/programing in c/structure/input1.txt","w");
    scanf("%[^\n]",inputstring);  // gets()   this I sonline c class
    fprintf(fp,"%s",inputstring);
    fclose(fp);
    fp =fopen("D:/studies/programing/c or c++ projects/programing in c/structure/input1.txt","r");
    while((c =getc(fp))!=EOF){
        printf("%c",c);

    }

    return 0;
}