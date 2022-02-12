//L80 CSLL insertion at beginning
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node* next;
    
};
typedef struct node nd;

nd* addToEmpty(int data){
    
    nd* temp=malloc(sizeof(nd));
    temp->data=data;
    temp->next=temp;
    return temp;
}

nd* addAtBeg(nd* tail,int data){
    
    nd* newP=malloc(sizeof(nd));
    newP->data=data;
    newP->next=tail->next;
    tail->next=newP;
    return tail;
}

void print(nd* tail){
    nd* p =tail->next;
    do{
    printf("%d ",p->data);
    p=p->next;
    }while(p!=tail->next);
    
}

int main()
{
    nd* tail;
    tail=addToEmpty(45);
    tail=addAtBeg(tail,34);
    
    print(tail);

    return 0;
}

