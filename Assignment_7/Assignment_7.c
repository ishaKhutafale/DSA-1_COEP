#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;


typedef struct Stack {
    Node* top;
}Stack;


void init(Stack* stack) {
    stack->top = NULL;
}

int isEmpty(Stack* stack) {
    return stack->top == NULL;
}

void push(Stack* stack, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode == NULL) {
        return;
    }

    newNode->data = value;
    newNode->next = stack->top;

    stack->top = newNode;
}
 
int pop(Stack* stack) {
        int value = stack->top->data;
    	Node* temp = stack->top;
    	stack->top = stack->top->next;
    	free(temp);
    	return value;   
}

void peek(Stack* stack) {
    if (!isEmpty(stack)) {
        printf("Stack Top element is: %d\n",stack->top->data);
    }
    else
    {
    	printf("Stack is empty\n");
    }
    
}

void display(Stack* stack) {
    if (!isEmpty(stack)) {
        printf("Stack elements: ");
    	Node* current = stack->top;
    	while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    	}
    	printf("\n");
    }
    else
    {
    	printf("Stack is empty\n");
        return;
    }  
}

int main() {
    Stack stack;
    init(&stack);

    int choice, data;

    do {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Peek\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &data);
                push(&stack, data);
                break;
            case 2:
                if(!isEmpty(&stack))
                {
                	printf("Popped element: %d\n", pop(&stack));
                }
         	else
         	{
         		printf("Stack is empty\n");
         	}
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                peek(&stack);
                break;
            case 5:
                printf("Exiting the program\n");
                break;
            default:
                printf("Invalid choice\n");
        }

    }while (choice != 5);

    return 0;
}

