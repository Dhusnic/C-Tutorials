 #include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp =fopen("input1.txt","w");
    fprintf(fp,"Features of C language\nIt is a robust language with rich set of built-in functio\ns and operators that can be used to write any complex program.\nThe C compiler combines the capabilities of an assembly language with features of a high-level language.Programs Written in C are efficient and fast. This is due to its variety of data type and powerful operators.\nIt is many time faster than BASIC.C is highly portable this means that programs once written can be run on another machi\nnes with little or no modification.\nAnother important feature of C program, is its ability to extend itself.A C program is basically a collection of functions that are supported by C library. We\n can also create our own function and add it to C library.\nC language is the most widely used language in operating systems and embedded system development today.");
    fclose(fp);
    char c;
    int count=1;
    char inputstring[100];
    fp =fopen("input1.txt","r");
    printf("File content\n");
    while((c =getc(fp))!=EOF){
       printf("%c",c);
        if(c=='\n')
            count++;
    }
printf("\nNumber of lines : %d",count);
    return 0;
}