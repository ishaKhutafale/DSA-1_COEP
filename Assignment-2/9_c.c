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
    int i, n;
    float x;
    printf(" Enter the value for x : ");
    scanf("%f",&x);
     
    printf(" Enter the value for n : ");
    scanf("%d",&n);
     
    x=x*PI/180;
    float e_topow_x=(1+x);
    /* Loop to calculate the value of Cosine */
    for(int i = 2; i <= n; i++ )
        {
                    e_topow_x += pow(x, i) / fact(i);
			
		}
        printf("e_toThePower_x = %f", e_topow_x);
       
	}	
	
    
