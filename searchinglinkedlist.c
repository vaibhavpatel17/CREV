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
    struct node *newnode;
    struct node *head;
    node1=malloc(sizeof(struct node));
    node2=malloc(sizeof(struct node));
    node3=malloc(sizeof(struct node));
    newnode=malloc(sizeof(struct node));
    node1->data=10;
    node1->next=node2;
    node2->data=20;
    node2->next=NULL;
    node3->data=30;
    head=node1;
    struct node *temp=head;
    int found=0;
    while(temp!=NULL)
    {
        if(temp->data==20)
        {
            printf("element found\n");
            int found=1; // we have already initialized found , if we again write int then we are
            //creating a new local variable instead of updating 
            break;
        }
        temp=temp->next;
    }
    if(found==0)
    {
        printf("element not found\n");
    }
    return 0;
}