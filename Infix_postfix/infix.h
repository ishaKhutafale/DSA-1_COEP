typedef struct node
{
	char data;
	struct node *next;
}node;

typedef struct stack
{
	node *top;
}stack;

void init(stack *s);
int isEmpty(stack *s);
void push(stack *s,char c);
char pop(stack *s);
char peek(stack *s);

