//L56 REVERSE A SLL

#include <stdio.h>
#include<stdlib.h>

struct node {
    
    int data;
    struct node * link;
    
};
typedef struct node nd;

nd*reverse(nd* head){
    nd* prev=0;
    nd* next=0;
    
    while(head!=0){
        next=head->link;
        head->link=prev;
        prev=head;
        head=next;
        }
    head=prev;
    return head;}
    
int main()
{
      nd*ptr;
        
     nd* head= malloc(sizeof(struct node));
    head->data =45;
    head->link = 0;
    
    nd *dptr= malloc(sizeof(struct node));
    dptr->data=98;
    dptr->link=0;
    
    head->link=dptr;
    
    nd*aptr=malloc(sizeof(struct node));
    aptr->data=3;
    aptr->link=0;
    
    dptr->link=aptr;
    
    /*nd* eptr =malloc(sizeof(struct node));
    eptr->data=5;
    eptr->link=0;
    
    aptr->link=eptr;*/
    
    head=reverse(head);
    ptr=head;
    while(ptr!=0){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
        
    }

    return 0;
}

