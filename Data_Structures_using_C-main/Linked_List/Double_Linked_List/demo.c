 #include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
struct node *temp,*head=NULL,*newnode;
void create()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    int data;
    printf("Enter the data you need to enter : ");
    scanf("%d",&data);
    newnode->data=data;
    newnode->next=NULL; 
    if ( head==NULL)
    {
        head=newnode;
        temp=newnode;
        //temp->prev=NULL;
        //temp->next=newnode;
    }
    else
    {
        temp->next=newnode;
        newnode->prev=temp;
        temp=newnode;
    }
    
    // newnode->prev=NULL;
    // newnode->data=data;
    // newnode->next=NULL;

}
void del_at_begining()
{
    int data;
    newnode=(struct node *)malloc(sizeof(struct node));
    if (head==NULL)
    {
        printf("The List is empty");
    }
    else
    {
        head=head->next;
         
    }
    
}

void del_at_position()
{
    struct node *temp_prev=NULL,*temp_next=NULL;
    int data,pos,count=0;
    newnode=(struct node *)malloc(sizeof(struct node));
    printf("enter the position you want to delete    :   ");
    scanf("%d",&pos);
    newnode->data=data;
    temp=head;
    newnode->next=NULL;
    if (head == NULL)
    {
        printf("The list is empty");
    }
    else
    {
         while (count<pos&&temp!=NULL)
        {
            temp_prev=temp;
            temp = temp->next;
            count++;
        }
        if (temp!=NULL)
        {
            temp_prev->next=temp->next;
        
        }
        

        
    }
    
}

void del_at_end()
{
    struct node *temp_prev;
    newnode=(struct node *)malloc(sizeof(struct node));
    if (head==NULL)
    {
        printf("The list is Empty");
    }
    else
    {
        temp=head;
        while (temp->next!=NULL)
        {
            temp_prev=temp;
            temp=temp->next;
        }
        temp_prev->next=NULL;
    }

}


void display()
{
    temp = head;
    while (temp!=NULL)
    {
        printf("%d , ",temp->data);
        temp = temp->next; //this statement is using to transversing the linked list
    }
    printf("\n");
}
int main()
{
    int choice=1;
    while(choice)
    {
        create();
        printf("enter 1 to continue to create or 0 to finish :  ");
        scanf("%d",&choice);
        

    }
    display();
    del_at_begining();
    display();
    del_at_end();
    display();
    del_at_position();
    display();
     
}