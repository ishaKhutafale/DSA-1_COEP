#include<stdio.h>
#include "circular.h"
int main()
{
clist l;
init(&l);

insert_end(&l,100);
insert_end(&l,200);
insert_beg(&l,300);
insert_beg(&l,400);
traverse(l);

del_beg(&l);
del_end(&l);
traverse(l);
printf("%d\n",search(l,3));
int len=length(l);
printf("%d",len);
destroy(&l);

return 0;
}

