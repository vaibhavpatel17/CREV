#include <stdio.h>
#include <stdlib.h>

int main() {
    struct node{
        int data;
        struct node *next;
    };
    struct  node *node1;
    struct  node *node2;
    struct node *newnode;
    struct node *head;

    node1=malloc(sizeof(struct node));//remember sizeof is one single word
    node2=malloc(sizeof(struct node));
    newnode=malloc(sizeof(struct node));
    if(node1==NULL||node2==NULL||newnode==NULL)
    {
        printf("DMA failed\n");
        free(node1);
        free(node2);
        free(newnode);
        return 1 ;
    }
    node1->data=10;
    node1->next=node2;
    node2->data=20;
    node2->next=NULL;
    head=node1;//node1 alreay contains the address so now head and node1 both has the address of first node
    newnode->data=5;
    newnode->next=head;
    head=newnode; //this is where head points to 5 
    //newnode contains the address of the newly created node 
    //head==newnode means copy the address into head
    //now head points to 5 instead of 10 

    printf("%d\n",node1->data);
    printf("%d\n",node1->next->data);
    printf("%d\n",newnode->data);
    //printing the values stored in the nodes
    struct node *temp=head; //we use temp variable so that we can still have access
    //to the head that is the first pointer even after the loop..
    while(temp!=NULL) // go until the temp variable is NULL 
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }

    return 0;
}