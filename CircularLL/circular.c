#include<stdlib.h>
#include<stdio.h>
#include "circular.h"

void init(clist* l) {
    *l = NULL;
}

void insert_end(clist* l, int d) {
    node* nn = (node*)malloc(sizeof(node));
    if (nn) {
        nn->d = d;
        nn->next = NULL;
    } else {
        return;
    }

    if (*l == NULL) {
        nn->next = nn; // Set nn->next to nn when the list is empty
        *l = nn;
    } else {
        node* p = *l;
        while (p->next != *l) {
            p = p->next;
        }
        p->next = nn;
    }

    nn->next = *l;
}

void insert_beg(clist* l, int d) {
    node* nn = (node*)malloc(sizeof(node));
    if (nn) {
        nn->d = d;
        nn->next = NULL;
    } else {
        return;
    }

    if (*l == NULL) {
        nn->next = nn; // Set nn->next to nn when the list is empty
        *l = nn;
    } else {
        node* p = *l;
        while (p->next != *l) {
            p = p->next;
        }
        p->next = nn;
        nn->next = *l;
        *l = nn;
    }
}

void del_beg(clist* l) {
    if (*l == NULL)
        return;

    node* p = *l;
    if (p->next == *l) {
        free(p);
        *l = NULL;
    } else {
        node* q = *l;
        while (q->next != *l) {
            q = q->next;
        }
        q->next = p->next;
        *l = p->next;
        free(p);
    }
}

void del_end(clist* l) {
    if (*l == NULL)
        return;

    node* p = *l;
    node* q = NULL;

    while (p->next != *l) {
        q = p;
        p = p->next;
    }

    if (q != NULL) {
        q->next = *l;
        free(p);
    } else {
        free(p);
        *l = NULL;
    }
}

int search(clist l,int ele)
{
	node *p= l;
	while(p != l && p->d != ele)
	{
		p=p->next;
	}
	if(p==l)
		return 0;
	else
		return 1;
	
}

void traverse(clist l) {
    if (l == NULL)
        return;

    node* p = l;
    do {
        printf("%d ", p->d);
        p = p->next;
    } while (p != l);

    printf("\n");
}

void destroy(clist *l)
{
	node *p=(*l)->next;
	node *q;
	while(p != *l)
	{
		q=p;
		p=p->next;
		free(q);
	}
	free(*l);
	*l=NULL;
}

int length(clist l)
{
	int count=0;
	node *p=l;
	if(l==NULL)
		return count;
	do
	{
		count++;
		p=p->next;
	}while(p != l);
	return count;
}


