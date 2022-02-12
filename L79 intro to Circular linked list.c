//CSLL
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * next;
};
typedef struct node nd;


nd* circularSingly(int data){
    
    nd* temp=malloc(sizeof(nd));
    temp->data=data;
    temp->next=temp;
    
    return temp;
}


int main()
{
    
    int data=34;
    nd* tail;
    tail=circularSingly(data);
    
    printf("%d",tail->data);
    
    
    return 0;
}

