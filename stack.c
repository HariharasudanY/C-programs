#include<stdio.h>
#include<stdlib.h>
int push();
int pop();
void display();


struct node
{
int data;
struct node *next,*prev;
}*top,*temp,*newnode,*bot;


int main()
{int a;
    a=push();
    //pop();
    display(a);

}


int push()
{
    int l=0, choice =1;
    while(choice==1)
    {
        newnode=malloc(sizeof(struct node));
        printf("Enter the data: ");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(top==0)
        {
            bot=top=newnode;

        }
        else
        {
            newnode->next=top;
            top=newnode;

        }
                printf("Enter the choice 0 or 1: ");
                scanf("%d",&choice);
          l++;
    }
}



void display(int l)
{
    int i,j;
    printf("Given Stack\n");
    temp=top;
    while(temp!=0)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\nReversed Stack\n");


}
