#include<stdio.h>
#include<stdlib.h>
#include "SMList.h"

void init(list *head)
{
	*head=NULL;
	return;
}

void append(list *head,int r,int c,int val)
{
	node *nn;
	nn=(node*)malloc(sizeof(node));
	if(nn)
	{
		nn->r=r;
		nn->c=c;
		nn->val=val;
		nn->next=NULL;
	}
	else return;
	if(*head==NULL)
	{
		*head=nn;
		return;
	}
	node *p=*head;
	while(p->next!=NULL)
	{
		p=p->next;
	}
	p->next=nn;
	return;
}	

void sum(list *head1,list *head2,list *res)
{
	node *p=*head1;
	node *q=*head2;
	while(p && q)
	{
		if(p->r ==q->r)
		{
			if(p->c == q->c)
			{
				append(res,p->r,q->c,p->val+q->val);
				p=p->next;
				q=q->next;	
			}
			else if(p->c < q->c)
			{
				append(res,p->r,p->c,p->val);
				p=p->next;
			}
			else
			{
				append(res,q->r,q->c,q->val);
				q=q->next;
			}
		}
		else if(p->r < q->r)
		{
			append(res,p->r,p->c,p->val);
			p=p->next;
		}
		else
		{
			append(res,q->r,q->c,q->val);
			q=q->next;
		}	
	}
	while(p){
		append(res, p->r, p->c, p->val);
		p = p->next;	
	}
	while(q){
		append(res, q->r, q->c, q->val);
		q = q->next;
	}
	return;
}

void sub(list *head1,list *head2,list *res)
{
	node *p=*head1;
	node *q=*head2;
	while(p && q)
	{
		if(p->r == q->r)
		{
			if(p->c == q->c)
			{
				append(res,p->r,q->c,p->val-q->val);
				p=p->next;
				q=q->next;	
			}
			else if(p->c < q->c)
			{
				append(res,p->r,p->c,p->val);
				p=p->next;
			}
			else
			{
				append(res,q->r,q->c,-1 *q->val);
				q=q->next;
			}
		}
		else if(p->r < q->r)
		{
			append(res,p->r,p->c,p->val);
			p=p->next;
		}
		else
		{
			append(res,q->r,q->c,-1 *q->val);
			q=q->next;
		}	
	}
	while(p){
		append(res, p->r, p->c, p->val);
		p = p->next;	
	}
	while(q){
		append(res, q->r, q->c, -1 *q->val);
		q = q->next;
	}
	return;
}

void display(list l)
{
	while(l)
	{
		printf("[ %d %d %d",l->r,l->c,l->val);
		l=l->next;
	}
	return;
}

