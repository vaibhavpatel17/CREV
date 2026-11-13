#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct node *node1;
    struct node *node2;
    struct node *node3;
    struct node *head;
    node1=malloc(sizeof(struct node));
    node2=malloc(sizeof(struct node));
    node3=malloc(sizeof(struct node));
    node1->data=10;
    node1->next=node2;
    node2->data=20;
    node2->next=node3;
    node3->data=30;
    node3->next=NULL;
    head=node1;
    struct node *temp=head;
    struct node *prev=NULL;
    while(temp->next!=NULL)
    {
        prev=temp;
        temp=temp->next;
    }
    free(temp); //free 30
    //now prev points to 20
    prev->next=NULL; // we make sure there some node that is pointing to null 
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}