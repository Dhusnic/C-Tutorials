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
    int j=0,temp;
    for (  i = 0; i < n-1; i++)
    {
        int min = i;
        for (  j= i+1; j<n; j++)
        {
            if (arr[j]<arr[min])
            {
                min = j;
            }
            
        }
        if (min!=i)
        {
            temp=arr[i];
            arr[i]=arr[min];
            arr[min]=temp;
        }
        
        
    }
     


}

void Deccending_Order()
{
   int j=0,temp;
    for (  i = 0; i < n-1; i++)
    {
        int max = i;
        for (  j= i+1; j<n; j++)
        {
            if (arr[j]>arr[max])
            {
                max = j;
            }
            
        }
        if (max!=i)
        {
            temp=arr[i];
            arr[i]=arr[max];
            arr[max]=temp;
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