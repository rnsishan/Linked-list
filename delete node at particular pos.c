//deleting node at a particular position

#include <stdio.h>
#include<stdlib.h>

struct node {
    
    int data;
    struct node * link;
    
};

typedef struct node nd;

void del_pos(nd** head,int position ){
    nd* current=*head;
    nd* previous=*head;
    if(*head==0){
        printf("list empty");
    }
    else if(position==1){   //updating the head pointer to 
                            //point to next ptr,then free 1st node
        *head=current->link;
        free(current);
        current=0;
    }
    else{
        while(position!=1){
            previous=current;   
            current=current->link;
            position--;
        }   
            previous->link=current->link;
            free(current);
            current=0;
    }
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
    
    int position =2;
    del_pos(&head,position);
    
    ptr=head;
    
    while(ptr!=0){
        printf("%d \n",ptr->data);
        ptr=ptr->link;
        
    }
    

    return 0;
}

