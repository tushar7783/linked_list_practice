#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
	
}*first=NULL;
void create (int a[],int n){
	int i;
	struct node *t,*last;
	first=(struct node *)mallloc(sizeof(struct node));
	first->data=a[0];     //it  is use so that the first point to the node first 
	first->next=NULL;    //ib is  used so that the next node is not pointing to any node 
	last=first;
	  for(i=1;i<n;i++){
	  	t=(struct node *)mallloc(sizeof(struct node)); 
	  	t->data=a[i];
	  	t->next=NULL;
	  	last->next=t;
	  	last=t;
	  }
}
void display(struct node *p) {
	while(p!=NULL){
		printf("%d",p->data)
		p=p->next;
	}
}
int int main(){
	int a[]={3,5,7,10,15}
	create(a,5);
	display(first);
	return 0;
}
