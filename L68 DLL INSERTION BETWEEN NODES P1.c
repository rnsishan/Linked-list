//L68 DLL INSERTION BETWEEN NODES
//add addAfterPos
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

nd* AddAtEnd(nd* head,int data){
    nd* temp,*tp;
    temp=malloc(sizeof(nd));
    temp->prev=0;
    temp->data=data;
    temp->next=0;
    
    tp=head;
    while(tp->next!=0){
        tp=tp->next;
    }
    tp->next=temp;
    temp->prev=tp;
    return head;
    
}

    nd* addAfterPos(nd* head,int data,int position){
        nd* newP=0;
        nd* temp=head;
        nd* temp2=0;
        newP=addToEmpty(newP,data);
        
        while(position!=1){
            temp=temp->next;
            position--;
        }
        if(temp->next==0){
            temp->next=newP;
            newP->prev=temp;
        }
        else{
        temp2=temp->next;
        temp->next=newP;
        newP->next=temp2;
        newP->prev=temp;
    }
        return head; }
    
int main()
{
    nd*head=0;          //this is add after pos not add at pos
    nd* ptr=0;
    int position=2;
    head=addToEmpty(head,45);
    head= addAtBeg(head,34);
    head=AddAtEnd(head,9);
    head= addAfterPos(head,25,position);
    ptr=head;
    while(ptr!=0){
    printf("%d ",ptr->data);
    ptr=ptr->next;    
    }
    return 0;
}


