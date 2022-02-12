//L65 inserting a node in an empty list

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

    
int main()
{
    nd*head=0;
    head=addToEmpty(head,45);
    
    printf("%d",head->data);
    
    
    
    return 0;
}


