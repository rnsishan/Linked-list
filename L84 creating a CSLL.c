//L84 creating a CSLL
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


nd* AddAtEnd(nd* tail,int data){
    
    nd* newP=malloc(sizeof(nd));
    newP->data=data;
    newP->next=0;
    
    newP->next=tail->next;
    tail->next=newP;
    tail=tail->next;
    
    return tail;
}

nd* createList(nd* tail){
    int i,n,data;
    printf("enter number of nodes");
    scanf("%d",&n);
    
    if(n==0)
        return tail;
    printf("enter the element 1:");
    scanf("%d",&data);
    tail=addToEmpty(data);
    
    for(i=1;i<n;i++){
        printf("enter the element %d: ",i+1);
        scanf("%d",&data);
        tail=AddAtEnd(tail,data);
        
    }
    return tail;
}

void print(nd* tail){
    if(tail==0){
        printf("no node");
    }
    else{
    nd*p=tail->next;
    do{
    printf("%d ",p->data);
    p=p->next;
    }while(p!=tail->next);
    printf("\n");
    }
}

int main()
{
    nd* tail=0;
    tail=createList(tail);
    print(tail);

    return 0;
}




