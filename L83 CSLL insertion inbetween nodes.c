//L83 CSLL insertion inbetween nodes

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

nd* AddAtEnd(nd* tail,int data){
    
    nd* newP=malloc(sizeof(nd));
    newP->data=data;
    newP->next=0;
    
    newP->next=tail->next;
    tail->next=newP;
    tail=tail->next;
    
    return tail;
}

nd* addAfterPos(nd*tail,int data,int pos){
    nd*p =tail->next;
    nd* newP= malloc(sizeof(nd));
    newP->data=data;
    newP->next=0;
    while(pos>1){
        p=p->next;
        pos--;
    }
    newP->next=p->next;
    p->next=newP;
    if(p==tail){
        tail=tail->next;
    }
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
    tail=AddAtEnd(tail,6);
    
    print(tail);
    printf("\n");

    tail=addAfterPos(tail,66,2);
    print(tail);
    return 0;
}






