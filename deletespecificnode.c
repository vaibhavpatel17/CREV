#include <stdio.h>
#include <stdlib.h>

int main() {
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
    //have to delete the second node 
    int pos=2;
    struct node *temp=head;
    struct node *prev=temp;
    for(int i=1;i<(pos-1);i++)
    {
        prev=temp;
        temp=temp->next;
    }
    free(temp);
    prev->next=temp->next;
    //the above two lines are wrong because the temp now has the value 20 and the second line we connot access the the temp->next 
    //because we have already freezed it in the first line itself 
    temp=head;
    while(temp!=NULL)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}
    return 0;
}