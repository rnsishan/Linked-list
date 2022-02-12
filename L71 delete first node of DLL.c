//L71 delete first node of DLL
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

nd* delfirst(nd* head){
    nd* temp=head;
    head=head->next;
    free(temp);
    temp=0;
    head->prev=0;
    return head;
    
    
}

void print(nd*head){
    nd* ptr=head;
    while(ptr!=0){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
    
}

int main()
{
    nd* head=0;
    nd*ptr;
    head=addToEmpty(head,34);
    head=AddAtEnd(head,45);
    head=AddAtEnd(head,9);
    
    printf("before deletion: \n");
    print(head);
    
    //deleting first node
    
    head=delfirst(head);
    printf("after deletion: \n");
    print(head);
    

    return 0;
}

