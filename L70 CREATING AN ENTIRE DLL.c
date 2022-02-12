//L70 CREATING AN ENTIRE DLL
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



nd* createlist(nd* head){
    
    int n,data,i;
    printf("enter number of nodes");
    scanf("%d",&n);
    
    if(n==0){
        return head;
    }
    
    printf("enter the element for node 1: ");
    scanf("%d",&data);
    head= addToEmpty(head,data);
    
    for(i=1;i<n;i++){
        printf("enter the element for node %d: ",i+1);
        scanf("%d",&data);
        head= AddAtEnd(head,data);
    }
    return head;
}

int main()
{
    nd* head=0;
    nd* ptr;
    head=createlist(head);
    ptr=head;
    while(ptr!=0){
    printf("%d ",ptr->data);
    ptr=ptr->next;    
    }

    return 0;
}

