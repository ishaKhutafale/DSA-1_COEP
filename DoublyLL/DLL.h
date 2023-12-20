#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *prev,*next;
}node;
typedef struct list
{
	node *front,*rear;
}list;

void init(list *);
int isEmpty(list);
void insert_end(list *, int d);
void insert_beg(list *l,int d);
void delete_beg(list *l);
void delete_end(list *l);
void traverseLR(list);
void traverseRL(list);
int length(list);
int search(list,int d);
void destroy(list *);
