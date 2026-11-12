#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct node *node1;
    struct node *node2;
    struct node *newnode;
    struct node *head;
    node1=malloc(sizeof(struct node));
    node2=malloc(sizeof(struct node));
    newnode=malloc(sizeof(struct node));
    //intializing data and connecting nodes 
    node1->data=10;
    node1->next=node2;
    node2->data=20;
    node2->next=NULL;
     head=node1;//copying the address of node1 into head 
    newnode->data=30;
    newnode->next=NULL;
    struct node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }

temp->next=newnode;
temp=head;
while(temp!=NULL)
{
    printf("%d\n",temp->data);
    temp=temp->next;
}
    return 0;
}