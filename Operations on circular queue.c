/*Operations on circular queue
Array implementation of queue with maximum size MAX
ISHAN KOUL
1RN20CS056
*/

#include<stdio.h>
#include<stdlib.h>
#define MAX 3

void insert(char*,int*,int*);

void delete(char*,int*,int*);

void display(char*,int,int);

int main(){
	char q[MAX];
	int r=-1;
	int f=0,cnt=0;
	int ch;
	while(1){
		printf("\n1.Insert\n2.Delete\n3.Display\n4.Exit\n");
		scanf("%d",&ch);
		switch(ch){
		case 1: insert(q,&r,&cnt);
						break;
		case 2: delete(q,&f,&cnt);
						break;
		case 3:	display(q,f,cnt);
						break;
		default: exit(0);		
			
		}
	
	}


}

void insert(char *q,int *r,int *cnt){
	char ele;
	if((*cnt)==MAX){
	printf("CQueue overflow\n");
	return;
	}
	(*r)=((*r)+1)%MAX;
	printf("\nenter the element\n");
	scanf(" %c",&ele);
	q[(*r)]=ele;
	(*cnt)++;

}

void delete(char *q,int *f,int *cnt){
	if((*cnt)==0){
	printf("\nqueue underflow\n");
	return;
	}
	printf("element deleted is %c\n",q[(*f)]);
	(*f)=((*f)+1)%MAX;
	(*cnt)--;
	
}

void display(char *q,int f,int cnt){
	int i,j;
	if(cnt==0){
	printf("\n CQ EMPTY\n");
	return;
	
	}
	printf("\n CQ CONTENTS ARE: \n");
	for(i=f,j=0;j<cnt;j++){
	printf("%d : %c \n",i,q[j]);
	i=(i+1)%MAX;
	
	}

}
