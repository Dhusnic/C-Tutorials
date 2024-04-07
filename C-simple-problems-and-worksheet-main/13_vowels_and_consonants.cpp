#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    char ai;
    printf("enter a charecter =  ");
    scanf("%c" , &ai);
    if (ai=='a' or ai=='e' or ai=='i' or ai=='o' or ai=='u')
    {
         cout<<"it is a vowel";
    }
    else
       cout<<"it is a consonant";
    
    return 0;
    
    
}
 