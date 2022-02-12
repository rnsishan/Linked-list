/*deleting the last node

note that we only have head pointer 
and we can access the 
list only through head pointer

we will keep two pointers. one ptr will stop at last
node of the list and the other ptr will stop
at the second last node of the list

no need to return head pointer as we are not updating
it in the fxn
*/

#include <stdio.h>
#include<stdlib.h>

struct node {
    
    int data;
    struct node * link;
    
};

typedef struct node nd;

void del_last(nd* head){
    if(head==0)
        printf("list is empty");
    
    else if(head->link==0){
        
        free(head);
        head=0;
    }
    else{
        nd* temp=head;
        nd* temp2=head;
        while(temp->link!=0){
            temp2=temp;
            temp=temp->link;
            
        }
        
        temp2->link=0;
        free(temp);
        temp=0;
        
    }
    
}

int main()
{
      nd* head= malloc(sizeof(struct node));
    head->data =45;
    head->link = 0;
    
    nd *ptr= malloc(sizeof(struct node));
    ptr->data=98;
    ptr->link=0;
    
    head->link=ptr;
    
    int data=3;
    
    del_last(head);
    ptr=head;
    while(ptr!=0){
        printf("%d",ptr->data);
        ptr=ptr->link;
        
    }
    
    
    

    return 0;
}

