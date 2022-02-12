//L55 deleting entire SLL

#include <stdio.h>
#include<stdlib.h>

struct node {
    
    int data;
    struct node * link;
    
};

typedef struct node nd;

nd* del_list(nd* head){
    nd* temp=head;
    while(temp!=0){
        temp=temp->link;
        free(head);
        head=temp;
    }

    return head;
}

int main()
{
      nd*ptr;
        
     nd* head= malloc(sizeof(struct node));
    head->data =45;
    head->link = 0;
    
    nd *dptr= malloc(sizeof(struct node));
    dptr->data=98;
    dptr->link=0;
    
    head->link=dptr;
    
    nd*aptr=malloc(sizeof(struct node));
    aptr->data=3;
    aptr->link=0;
    
    dptr->link=aptr;
    
    head=del_list(head);
    if(head==0){
        printf("empty LL");
    return 0;}
    
    /*while(ptr!=0){
        printf("%d \n",ptr->data);
        ptr=ptr->link;
      */
    
}
    return 0;
}

