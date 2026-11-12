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
    node1->data=10;
    node1->next=node2;
    node2->data=20;
    node2->next=NULL;
    head=node1;//copy the address of node1 into the head 
    newnode->data=15;
    int pos=2;
    struct node *temp=head; //give the address of the first node to temp
    for(int i=1;i<(pos-1);i++)
    {   
        temp=temp->next;   //point temp to 20
    }
    //i=0 temp=10==>temp=20
    //i=2 temp=20==>temp=null, but we want the temp to point 20
    newnode->next=temp->next; //copy the address stored in 20's next pointer into node 15's next pointer 
    //newnode as well as first node has the same address i.e 30
    temp->next=newnode;
    
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    return 0;
}