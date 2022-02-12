//SLL
#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node * link;
};
typedef struct node nd;


nd* insertfront(nd* head){
    int data;
    scanf("%d",&data);
    nd* ptr=malloc(sizeof(nd));
    ptr->data=data;
    ptr->link=0;
    
    
    ptr->link=head;
    head=ptr;
    return head;
    
}

void insertatpos(head){
    int pos;
    int data;
    printf("enter pos");
    scanf("%d",&pos);
     printf("enter value");
    scanf("%d",&data);
    nd*ptr;
    ptr=head;
    nd*ptr2=malloc(sizeof(nd));
    
    ptr2->data=data;
    ptr2->link=0;
    
    pos--;
    while(pos!=1){      //traversal based on pos
        ptr=ptr->link;
        pos--;
    }
    ptr2->link=ptr->link;
    ptr->link=ptr2;
    
    
    
}

nd* insertrear(nd* head){
    int data;
    scanf("%d",&data);
    nd*ptr,*temp;
    ptr=head;
    temp=malloc(sizeof(nd));
    
    temp->data=data;
    temp->link=0;
    if(head==0){
        return temp;
    }
    while(ptr->link!=0){
        ptr=ptr->link;
        
    }
    ptr->link=temp;
    return head;   
}

nd* deletefront(nd* head){
    if(head==0){
        printf("sll empty");
    }
    else{
    nd*temp;
    temp=head;
    head=head->link;
    free(temp);
    temp=0;

    }
    return head;
    }
    
void deleterear(nd* head){
    if(head==0){
        printf("sll empty");
        return;
    }
    else if(head->link=0){
        free(head);
        head=0;
    }
    else{
    nd* temp;   
    temp=head;
    while(temp->link->link!=0){
        temp=temp->link;
    }
    free(temp->link);
    temp->link=0;
        
    }
   
}

void deleteatpos(nd* head){
    int pos;
    int data;
        nd*previous;
        nd*current;
        current=head;
        previous=head;
    printf("enter pos");
    scanf("%d",&pos);
     printf("enter value");
    scanf("%d",&data);
    
    if(head==0){
        printf("sll empty");
        return;
    }
    else if(pos==1){
        head=current->link;
        free(current);
        current=0;
    }
    else{
        while(pos!=1){
        previous=current;
        current=current->link;
        pos--;
            
        }
        previous->link=current->link;
        free(current);
        current=0;
        
    }
    
    
    
    
}

nd* del_sll(nd* head){
    nd*temp=head;
    
while(temp!=0){
    temp=temp->link;
    free(head);
    head=temp;
}
return head;
    
    
}

nd* reverse(nd* head){
    
    nd*prev=0;
    nd*next=0;
    
    
    while(head!=0){
    next=head->link;
    head->link=prev;
    prev=head;
    head=next;
    
    }
    head=prev;
    return head;
    
}




  void display(nd* head){
    nd* ptr=0;
    ptr=head;
    if(head==0){
        printf("sll empty");
        return;
    }
    else{
    while(ptr!=0){
        printf("%d \n",ptr->data);
        ptr=ptr->link;
    }
    }
    
}

int main()
{   
    nd* head=0;
    //head=(nd*)malloc(sizeof(nd));
    int ch;
    while(1){
        printf("\n1.insert front \n2.delete front\n3.insert at pos\n4.delete at pos\n5.delete rear\n6.insert rear\n7.display\n8. delete entire sll\n9.reverse sll\n");
    scanf("%d",&ch);
        switch(ch){
            case 1: head=insertfront(head);
                    break;
            case 2: head=deletefront(head);
                    break;
            case 3: insertatpos(head);
                    break;
            case 4: deleteatpos(head);
                    break;
            case 5: deleterear(head);
                    break;
            case 6: head=insertrear(head);
                    break;
            case 7: display(head);
                    break;
            case 8: head=del_sll(head);
                    break;
            case 9: head=reverse(head);
                    break;
            default: exit(0);
        }
        
    }
  
}


