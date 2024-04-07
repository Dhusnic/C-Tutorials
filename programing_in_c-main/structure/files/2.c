 #include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp;
    fp =fopen("/D:/studies/pograming/c or c++ projects/programing in c/structure/input1.txt","w");
    fprintf(fp,"Examly is here to help in time of need. With the power of automation in hand, spend your time effortlessly focusing on your core competencies. Primarily, create compelling content with our simple user interface. This is followed by sharing the right content to the right candidates to make sure they are learning and growing in the way you need them to. And finally, assess their progress, with detailed reports to make the right decisions at the right time.");
    fclose(fp);
    char c[1000];
    FILE *fptr;
    if ((fptr = fopen("/D:/studies/programing/c or c++ projects/programing in c/structure/input1.txt", "r")) == NULL) {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
    exit(1);
    }
    // reads text until newline is encountered
    fscanf(fptr, "%[^\n]", c);
    printf("%s", c);
    fclose(fptr);
    return 0;
}