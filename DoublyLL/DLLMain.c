#include<stdio.h>
#include<stdlib.h>
#include "DLL.h"

void main(){

    list l1;
    init(&l1);
    insert_end(&l1,10);
    insert_end(&l1,20);
    insert_end(&l1,30);
    insert_beg(&l1,15);
    insert_beg(&l1,5);
    traverseLR(l1);
    traverseRL(l1);
    delete_beg(&l1);
    delete_end(&l1);
    traverseLR(l1);
    
    printf("\n%d\n", search(l1,3));
    int len = length(l1);
    printf("%d\n",len);
    destroy(&l1);
}
