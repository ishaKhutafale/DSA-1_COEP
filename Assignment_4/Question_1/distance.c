#include<stdio.h>
#include "distance.h"
void add_distance(dis d1,dis d2)
{
    dis sum; 
     sum.m = d1.m + d2.m; 
     sum.kms = d1.kms + d2.kms; 
       if(sum.m>= 1000) 
       { 
                         sum.m = sum.m%1000; 
                         sum.kms += 1; 
       } 
       printf("\n The sum of two distances is: %d kms %d metres", sum.kms, sum.m);
}
void sub_distance(dis d1,dis d2)
{
    dis sub; 
       if(d1.kms > d2.kms) 
       { 
                         sub.m = d1.m - d2.m; 
                         sub.kms = d1.kms - d2.kms; 
       } 
        else 
        { 
                    sub.m= d2.m - d1.m; 
                    sub.kms = d2.kms - d1.kms; 
        } 
      if(sub.m< 0) 
      { 
                    sub.kms = sub.kms - 1; 
                    sub.m = sub.m + 1000; 
      } 
     printf("\n The difference between two distances is: %d kms %d metres ", sub.kms, sub.m);
}
