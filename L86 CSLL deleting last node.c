//L86 CSLL deleting last node

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

nd* dellast(nd*tail){
    if(tail==0){
        return tail;
    }
    nd*temp=tail->next;
    if(tail->next==tail){
        free(tail);
        tail=0;
        return tail;
        
    }
    while(temp->next!=tail){
        temp=temp->next;
        
    }
    temp->next=tail->next;
    free(tail);
    tail=temp;
    return tail;
}

void print(nd* tail){
    nd* p =tail->next;
    do{
    printf("%d ",p->data);
    p=p->next;
    }while(p!=tail->next);
    printf("\n");
}

int main()
{
    nd* tail;
    tail=addToEmpty(45);
    tail=addAtBeg(tail,34);
    tail=AddAtEnd(tail,6);
    print(tail);
    tail=dellast(tail);
    print(tail);
    

    return 0;
}




