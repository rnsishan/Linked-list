//deleting node using 1 pointer
//deleting last node using single pointer
// L51


#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * link;
};

typedef struct node nd;

void del_last(nd* head){
    if(head==0)
        printf("list is empty");
    
    else if(head->link==0){
        
        free(head);
        head=0;
    }
    else{
        nd* temp=head;
        while(temp->link->link!=0){
            temp=temp->link;
            }
        free(temp->link);
        temp->link=0;
    }
    
}


int main()
{ 
 nd* head= (nd*)malloc(sizeof(nd));
    head->data =45;
    head->link =0;
    
    nd*ptr= (nd*)malloc(sizeof(nd));
    ptr->data=98;
    ptr->link=0;
    
    head->link=ptr;
    
    del_last(head);
    ptr=head;
    while(ptr!=0){
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    
    return 0;
}

