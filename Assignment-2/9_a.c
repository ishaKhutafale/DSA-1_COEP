#include<stdio.h>
#include<math.h>
#define PI 22/7.0

int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else{
        return n*fact(n-1);
    }
}
void main()
{
    int i, n,count=0;
    float cosX=1,x,x1;
    printf(" Enter the value for x : ");
    scanf("%f",&x);
    x1=x;
     
    printf(" Enter the value for n : ");
    scanf("%d",&n);
     
    x=x*PI/180;
    /* Loop to calculate the value of Cosine */
    for(int i = 2; i <= n; i = i + 2 )
        {
            if(count%2==0)
            {
                    cosX -= pow(x, i) / fact(i);
            }
            else
            {
                    cosX += pow(x, i) / fact(i);
            }
            count++;
			
		}
        printf("cosX = %f", cosX);
       
	}	
	
    
