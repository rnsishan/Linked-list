//insertion of node at POSITION
#include<stdio.h>
#include<stdlib.h>

struct node{
    
    int data;
    struct node * link;
};
typedef struct node nd;


void add_at_pos(nd* head,int data,int pos){
    
    nd* ptr=head;
    nd*ptr2= (nd*)malloc(sizeof(nd));
    ptr2->data=data;
    ptr2->link=0;
    
    pos--;          //traversal
    while(pos!=1){
        ptr=ptr->link;
        pos--;
    }
ptr2->link=ptr->link;
ptr->link=ptr2;
}

void add_at_end(nd* head,int data){
    nd* ptr,*temp;
    ptr=head;
    
    temp=(nd*)malloc(sizeof(nd));
    temp->data=data;
    temp->link=0;
    
    while(ptr->link!=0){
    
        ptr=ptr->link;
    }
    ptr->link=temp;
    }
    

int main(){
    
    nd * head=(nd*)malloc(sizeof(nd));
    head->data=45;
    head->link=0;
    
    add_at_end(head, 98);
    add_at_end(head, 3);
    
    int data= 67,position=3;
    add_at_pos(head,data,position);
    nd* ptr=head;
    
    while(ptr !=0){
        
        printf("%d\n",ptr->data);
        ptr=ptr->link;
    }
    return 0;
}












