#include<stdio.h>
#include<stdlib.h>
#include "DLL.h"

void init(list *l)
{
	l->front=NULL;
	l->rear=NULL;
}

int isEmpty(list l)
{
	if(l.front==NULL)
		return 1;
	return 0;
}	
void insert_end(list *l,int d)
{
	node *newnode=(node*)malloc(sizeof(node));
	newnode->next=NULL;
	newnode->prev=NULL;
	newnode->data=d;
	
	if(!isEmpty(*l))
	{
		node *p=l->front;
		while(p->next != NULL)
		{
			p=p->next;
		}
		p->next=newnode;
		newnode->prev=p;
		l->rear=newnode;
	}
	else
	{
		l->front=newnode;
		l->rear=newnode;
	}	
}


void insert_beg(list *l,int d)
{
	node *newnode=(node*)malloc(sizeof(node));
	newnode->next=NULL;
	newnode->prev=NULL;
	newnode->data=d;
	
	if(!isEmpty(*l))
	{
		node *p=l->front;
		l->front=newnode;
		newnode->next=p;
		p->prev=newnode;
		
	}
	else
	{
		l->front=newnode;
		l->rear=newnode;
	}	
}

void delete_beg(list *l)
{
	node *p=l->front;
	if(isEmpty(*l))
		return;
	l->front=p->next;
	free(p);
	return;
}
void delete_end(list *l)
{
	node *p=l->rear;
	if(isEmpty(*l))
		return;
	l->rear=p->prev;
	l->rear->next=NULL;
	free(p);
	return;
}
void traverseLR(list l)
{
	node*p=l.front;
	printf("FWD: [ ");
	while(p)
	{
		printf("%d \n",p->data);
		p=p->next;
	}
	printf(" ]\n");
}
void traverseRL(list l)
{
	node*p=l.rear;
	printf("BWD: [ ");
	while(p)
	{
		printf("%d \n",p->data);
		p=p->prev;
	}
	printf(" ]\n");
}
int length(list l)
{
	int count=0;
	node *p=l.front;
	while(p != NULL)
	{
		count++;
		p=p->next;
	}
	return count;
}
int search(list l,int d)
{
	node *p=l.front;
	while(p && p->data != d)
	{
		p=p->next;
	}
	if(!p)
        	return 0;  
     	else
        	return 1;
}
void destroy(list *l)
{
	node *p=l->front;
	node *q;
	while(p)
	{
		q=p;
		p=p->next;
		free(q);
	}
	l->front=NULL;
	l->rear=NULL;	
}
