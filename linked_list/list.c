#include<stdio.h>
#include<stdlib.h>
#include "list.h"

void init(list *head)
{
	*head=NULL;
	return;
}

void insert_end(list *head,int d)
{
	node *p,*newnode;
	newnode=(node*)malloc(sizeof(node));
	if(newnode != NULL)
	{
		newnode->data=d;
		newnode->next=NULL;
	}
	else return;
	if(*head == NULL)
	{
		*head=newnode;
		return;
	}
	p=*head;
	while(p->next != NULL)
	{
		p=p->next;
	}
	p->next=newnode;
	return;
}

void insert_beg(list *head,int d)
{
	node *newnode;
	newnode=(node*)malloc(sizeof(node));
	if(newnode)
	{
		newnode->data=d;
		newnode->next=NULL;
	}
	else return;
	newnode->next=*head;
	*head=newnode;
	return;
}

void delete_beg(list *head)
{
	node *p=*head;
	if(*head==NULL)
	{
		return;
	}
	*head=(*head)->next;
	free(p);
	return;
}
void delete_end(list *head)
{
	node *p = *head;
	node *q;
	if(*head == NULL)
	{
		return;
	}
	if(p->next==NULL)
	{
		*head = NULL;
		free(p);
		return;
	}
	while(p->next != NULL)
	{
		q=p;
		p=p->next;
	}
	q->next=NULL;
	free(p);
	return;
}
	
void traverse(list head)
{
	node *p=head;
	printf("[ ");
	
	while(p)
	{
		printf("%d ",p->data);
		p=p->next;
	}
	printf("]\n");
	return;	
}
int search(list head,int d)
{
	node *p=head;
	while(p && p->data != d)
	{
		p=p->next;
	}
	if(!p)
		return 0;
	else
		return 1;
}
int length(list head)
{
	node *p=head;
	int count=0;
	while(p != NULL)
	{
		count++;
		p=p->next;
	}
	return count;
}
void destroy(list *head)
{
	node *p = *head;
	node *q;
	while(p)
	{
		q=p;
		p=p->next;
		free(q);
	}
	*head=NULL;
}
void reverse_even(list *head) {
    node *current = *head;
    node *prev = NULL;
	while(current !=NULL)
	{
		if((current->data%2)==0)
		{
			prev=current;
				current=current->next;
				if((current->data%2)==0)
				{
					int temp=prev->data;
					prev->data=current->data;
					current->data=temp;
					current=current->next;
					
				}	
				else
				{ return;}
				
			
		}
		else
		{
			current=current->next;
		}
	}
}

void remove_duplicates(list *head) {
    if (*head == NULL) {
        return;
    }

    node *current = *head;

    while (current != NULL) {
        node *runner = current;
        while (runner->next != NULL) {
            if (runner->next->data == current->data) {
                node *temp = runner->next;
                if (temp->next != NULL) {
                    runner->next = temp->next;
                } 
                else { runner->next = NULL; }
                free(temp);
            } else {
                runner = runner->next;
            }
        }
        current = current->next;
    }
}


node* reverseList(list * head) {
    node* prev = NULL;
    node* current = *head;
    node* next = NULL;

    while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
}


 int isPalindrome(list head) {
    if (head == NULL) {
        return 1; 
    }

    // Reverse the entire linked list
    node* reversedList = reverseList(&head);

    // Compare the original list with the reversed list
    while (head != NULL) {
        if (head->data != reversedList->data) {
            return 0; // Not a palindrome
        }
        head = head->next;
        reversedList = reversedList->next;
    }

    return 1; // Palindrome
}




















