typedef struct array
{
	int *A;
	int size;
	int length;
}array;

void init(array *arr,int size);
void append(array *arr,int ele);
void insert_at_pos(array *arr,int pos,int ele);
void insert_at_beg(array *arr,int ele);
void remove_at_pos(array *arr,int pos);
void display(array arr);
int min(array arr);
int max(array arr);
void reverse(array *arr);
array merge(array a,array b);
void sort(array *arr);
void search(array arr,int ele);
void duplicates(array *arr);
void leftShift(array *arr);
void rightShift(array *arr);
int isPalindrome(array *arr);
