//doubly linked list
//each node has an extra ptr which points to previous node
//how to make a self referential structure of DLL and a node
#include <stdio.h>

struct node{
        struct node * prev;
        int data;
        struct node * next;
        
    };
typedef struct node nd;
    
    
int main()
{
    nd*head=malloc(sizeof(nd));
    head->prev=0;
    head->data=10;
    head->next=0;
    
    return 0;
}

