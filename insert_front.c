//inserting a node at the beginning of the list
#include<stdio.h>
#include<stdlib.h>

struct node {
    
    int data;
    struct node * link;
    
};
struct node * add_beg(struct node* head,int d)
{
    
    struct node * ptr= malloc(sizeof(struct node));
    ptr->data=d;
    ptr->link=0;
    
    ptr->link=head;
    head=ptr;
    return head;
}


int main(){
    
    struct node * head= malloc(sizeof(struct node));
    head->data =45;
    head->link = 0;
    
    struct node *ptr= malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=0;
    
    head->link=ptr;
    
    int data=3;
    
    head= add_beg(head,data);
    
    ptr=head;
    while(ptr!=0){
        
        printf("%d \n",ptr->data);
        ptr=ptr->link;
    }
    
    return 0;
}



