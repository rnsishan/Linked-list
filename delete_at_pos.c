//DELETE AT POS SLL
//assuming we have nodes and everything
#include <stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node * link;
};
typedef struct node nd;

nd* del_first(nd* head){
    
    if(head==0)
        printf("list empty");
    else{
        nd* temp=head;
        head=head->link;
        free(temp);
        return head;
    }
}

int main()

{   nd* head= (nd*)malloc(sizeof(nd));

head->data=45;
head->link=0;

nd* ptr= (nd*)malloc(sizeof(nd));

  head=del_first(head);
  ptr=head;
  
  if(ptr==0)
    printf("no node");
    
  while(ptr!=0){
      printf("%d",ptr->data);
      ptr=ptr->link;
  }

    return 0;
}

