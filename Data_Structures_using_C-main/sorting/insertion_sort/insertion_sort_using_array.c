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
    int temp,j=0;
    for (  i = 1; i <n; i++)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0&&arr[j]>temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
     


}

void Deccending_Order()
{
     int temp,j=0;
    for (  i = 1; i <n; i++)
    {
        temp=arr[i];
        j=i-1;
        while (j>=0&&arr[j]<temp)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
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