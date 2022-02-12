//L85 CSLL deleting first node 

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

void print(nd* tail){
    nd* p =tail->next;
    do{
    printf("%d ",p->data);
    p=p->next;
    }while(p!=tail->next);
    printf("\n");
    
}

nd* delfirst(nd*tail){
    if(tail==0){
        return tail;
    }
    if(tail->next==tail){
        free(tail);
        tail=0;
        return tail;
    }
    nd* temp=tail->next;
    tail->next=temp->next;
    free(temp);
    temp=0;
    return tail;
}
int main()
{
    nd* tail=0;
    tail=addToEmpty(45);
    tail=addAtBeg(tail,34);
    tail=AddAtEnd(tail,6);
    print(tail);
    tail=delfirst(tail);
    print(tail);

    return 0;
}




