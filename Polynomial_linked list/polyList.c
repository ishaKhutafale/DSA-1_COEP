#include<stdio.h>
#include "polyList.h"
#include<stdlib.h>

void init(poly *p)
{
	*p=NULL;
	return;
}
void create(poly *p,int c,int e) 
{ 
        node *newTerm = (node *)malloc(sizeof(node));
        if (!newTerm) 
        	return;

        newTerm->coef = c;
        newTerm->exp = e;
        newTerm->next = NULL;  

        if (*p == NULL) {
            *p = newTerm;  
        } 
        else 
        {
            node *temp = *p;
            while (temp->next != NULL) 
            {
                temp = temp->next;
            }
            temp->next = newTerm;
        }
}

void sum(poly *poly1,poly *poly2,poly *result)
{
	node *p=*poly1;
	node *q=*poly2;
	
	while(p && q)
	{
		if(p->exp > q->exp)
		{
			create(result,p->coef,p->exp);
			p=p->next;
		}
		else if(p->exp < q->exp)
		{
			create(result,q->coef,q->exp);
			q=q->next;
		}
		else
		{
			create(result,p->coef+q->coef,p->exp);
			p=p->next;
			q=q->next;
		}	
	}
	while(p)
	{
		create(result,p->coef,p->exp);
		p=p->next;
	}
	while(q)
	{
		create(result,q->coef,q->exp);
		q=q->next;
	}
	printf("polynomail Addition: \n");
	display(*result);
	return;
}

void sub(poly *poly1,poly *poly2,poly *result)
{
	node *p=*poly1;
	node *q=*poly2;
	
	while(p && q)
	{
		if(p->exp > q->exp)
		{
			create(result,p->coef,p->exp);
			p=p->next;
		}
		else if(p->exp < q->exp)
		{
			create(result,q->coef,-1*q->exp);
			q=q->next;
		}
		else
		{
			create(result,p->coef-q->coef,p->exp);
			p=p->next;
			q=q->next;
		}	
	}
	while(p)
	{
		create(result,p->coef,p->exp);
		p=p->next;
	}
	while(q)
	{
		create(result,q->coef, -1 * q->exp);
		q=q->next;
	}
	printf("polynomail subtraction: \n");
	display(*result);
	return;
}
void display(poly p)
{
	node *temp=p;
	while(temp){
		printf("coefficient: %d exp: %d\n",temp->coef,temp->exp);
		temp=temp->next;
	}

}


