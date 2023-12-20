typedef struct node
{
	int coef;
	int exp;
	struct node *next;
}node;

typedef node *poly;

void init(poly *p);
void create(poly *p,int c,int e);
void sum(poly *poly1,poly *poly2,poly *result);
void sub(poly *poly1,poly *poly2,poly *result);
void display(poly p);


