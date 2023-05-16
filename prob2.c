++++++++++++++#include<stdio.h>
#include<stdlib.h>
void insert();
void display();
void deletion();
struct node
{
    int data;
    struct node*next;
     struct node*prev;

}*newnode,*temp,*head;


void main()
    {
        insert();
        display();
        deletion();
        display();

    }
    void insert()
    {
        int choice=1;
        while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        printf("enter the data");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=newnode;

        }
        else
        {
            temp=head;
            while(temp->next!=0)
            {
             temp=temp->next;
            }
            temp->next=newnode;
            newnode->prev=temp;

        }
        printf("enter the choice");
        scanf("%d",&choice);
    }
    }
    void deletion()
    {
    int element;
    printf("enter the element");
    scanf("%d",&element);
    temp=head;
    while(temp->data!=element)
    {
        temp=temp->next;

    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;

    free(temp);

    }
    void display()
        {
            temp=head;

         while(temp->next!=0)
         {
             printf("%d ",temp->data);
             temp=temp->next;
         }
         printf("%d",temp->data);

        }
