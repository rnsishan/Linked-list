//L87 CSLL deleting at pos


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

nd* delInter(nd*tail,int pos){
    if(tail==0){
        return tail;
    }
    nd*temp=tail->next;
    if(tail->next==tail){
        free(tail);
        tail=0;
        return tail;
        
    }
    while(pos>2){
        temp=temp->next;
        pos--;
    }
    nd*temp2=temp->next;
    temp->next=temp2->next;
    if(temp2==tail)
        tail=temp;
    free(temp2);
    temp2=0;
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
    tail=delInter(tail,2);
    print(tail);
    

    return 0;
}





