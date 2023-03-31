#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*newnode;

void createNode()
{
    struct node *fnNode,*temp,*head;
    int num,i,n;
    newnode=(struct node*)malloc(sizeof(struct node));
    printf("Enter number of nodes:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter node %d:",i+1);
        scanf("%d",&num);
        newnode->data=num;
        newnode->next=NULL;
        if(head==NULL)
            head=newnode;
        else
        {
            temp=head;
            while(temp->next!=NULL)
                temp=temp->next;
            temp->next=newnode;
        }

    }
    
}

void main()
{
    struct node *head,*temp;
    createNode();
}