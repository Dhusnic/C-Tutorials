#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int y;
    printf("enter a year =  ");
    scanf("%d" , &y);
    if (y%4==0)
    {
        if (y%100==0)
        {
            if (y%400==0)
            {
                cout<<"it is a leap year";
            }
            else
                cout<<"it is not a leap year";
            
        }
        else
            cout<<"it is a leap year";
        
    
    }
    else
        cout<<"it is not a leap year";
    return 0;
    
    
}
 