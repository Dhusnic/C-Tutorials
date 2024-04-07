#include<stdio.h>
#include<stdlib.h>
int arr[100],n=0,i=0;
void create()
{
    n++;
    printf("\nEnter the you need to enter : ");
    scanf("%d",&arr[i]);
    i++;

}
void display()
{
    printf("\n");
    for (  i = 0; i<n; i++)
    {
       printf("%d ,",arr[i]); 
    }
    printf("\n");
}
void Accending_Order()
{
    int j=0,temp,flag;
    for (i = 0; i<n-1; i++)//OUTER LOOP USED FOR NUMBER OF PASS (TOTAL NUMBER OF PASS = N-1)
    {
        flag=0;             //flag variable is used to optimize the time of code(no swap in inner loop then break the pass loop)
        for (j= 0; j<n-1-i; j++)//INNER LOOP USED FOR NUMBER OF COMPARISON PER EACH LOOP
        {
            if (arr[j+1]<arr[j])
            {
                temp = arr[j];//{
                arr[j]=arr[j+1];//  code used for swaping    
                arr[j+1]=temp;//}
                flag=1;

            }
            
        }
        if (flag==0)
        {
            break;
        }
        
    }
    

}

void Deccending_Order()
{
    int j=0,temp,flag;
    for (i = 0; i<n-1; i++)//OUTER LOOP USED FOR NUMBER OF PASS (TOTAL NUMBER OF PASS = N-2)
    {
        flag=0;             //flag variable is used to optimize the time of code(no swap in inner loop then break the pass loop)
        for (j= 0; j<n-1-i; j++)//INNER LOOP USED FOR NUMBER OF COMPARISON PER EACH LOOP
        {
            if (arr[j]<arr[j+1])
            {
                temp = arr[j];//{
                arr[j]=arr[j+1];//  code used for swaping    
                arr[j+1]=temp;//}
                flag=1;

            }
            
        }
        if (flag==0)
        {
            break;
        }
        
    }
}
int main()
{
    int choice=1,a,b=1;
    while(choice != 0)
    {
        create();
        printf("press 1 to continue or 0 to end = ");
        scanf("%d",&choice);
    }
    display();
    printf("\n  ENTER THE NUMBER OF THE OPREATION TO PERFORM \n1) SORT IN ACCENDING ORDER \n 2) SORT IN DECENDING ORDER \n 3) both\n 4) exit \n ENTER THE OPTION :    ");
    scanf("%d",&a);
    switch (a)
    {
    case 1:
        printf("\nTHE ENTER DATA IS SORTED IN ACCENDING ORDER : ");
        Accending_Order();
        display();
        break;
    case 2:
        printf("\nTHE ENTER DATA IS SORTED IN DECCENDING ORDER : ");
        Deccending_Order();
        display();
        break;
    case 3:
        printf("\nTHE ENTER DATA IS SORTED IN ACCENDING ORDER : ");
        Accending_Order();
        display();
        printf("\nTHE ENTER DATA IS SORTED IN DECCENDING ORDER : ");
        Deccending_Order();
        display();
        break;
    case 4:
        break;
    default:
        printf("ENTER THE VALID OPTION");
    }
}