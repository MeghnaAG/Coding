#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
    struct node *prev;
};

void createNode()
{
    struct node *newnode, *temp, *head=NULL;
    int num, n, i;
    
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    
    for(i = 0; i < n; i++)
    {
        printf("Enter node %d: ", i+1);
        scanf("%d", &num);
        
        newnode = (struct node*)malloc(sizeof(struct node));
        newnode->data = num;
        newnode->next = NULL;
        newnode->prev = NULL;
        
        if(head == NULL)
        {
            head = newnode;
            temp = newnode;
        }
        else
        {
            temp->next = newnode;
            newnode->prev = temp;
            temp = newnode;
        }
    }
    
    printf("Data in the list:\n");
    temp = head;
    while(temp != NULL)
    {
        printf("%d\t", temp->data);
        temp = temp->next;
    }
}

int main()
{
    createNode();
    return 0;
}
