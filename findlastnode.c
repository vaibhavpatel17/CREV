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
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        {
            printf("%d\n",temp->data);
        }
        temp=temp->next;
    }
    return 0;
}