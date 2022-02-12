//L66 inserting a node at the beginning of DLL
#include <stdio.h>
#include<stdlib.h>

struct node{
        struct node * prev;
        int data;
        struct node * next;
        
    };
typedef struct node nd;

nd* addToEmpty(nd* head,int data){
    nd* temp=malloc(sizeof(nd));
    
    temp->prev=0;
    temp->data=data;
    temp->next=0;
    head=temp;
    return head;
}

nd* addAtBeg(nd* head,int data){
    nd* temp=malloc(sizeof(nd));
    temp->prev=0;
    temp->data=data;
    temp->next=0;
    
    temp->next=head;
    head->prev=temp;
    
    head=temp;
    return head;
}
    
int main()
{
    nd*head=0;
    nd* ptr=0;
    head=addToEmpty(head,45);
    head= addAtBeg(head,34);
    
    ptr=head;
    while(ptr!=0){
    printf("%d ",ptr->data);
    ptr=ptr->next;    
    }
    return 0;
}

