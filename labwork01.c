#include <stdio.h>
#include <math.h>

int main()
{
    float x1,x2,px,a,b,c;
    float x,F;
    int n = 0;
    
    printf("Input x1: ");
    scanf("%f", &x1);
    printf("Input x2: ");
    scanf("%f", &x2);
    printf("Input px: ");
    scanf("%f", &px);
    printf("Input a: ");
    scanf("%f", &a);
    printf("Input b: ");
    scanf("%f", &b);
    printf("Input c: ");
    scanf("%f", &c);
    x = x1;
    printf("\n\t Rezults: \n");
    while(x < x2)
    {
        n++;
        
        if((b-a<0)&&(c==0))
        {
            //printf("Case 1: ");
            F = (x+log(a*c))/(x+b);
        }
        else if((b-a>0)||(c!=0))
        {
            //printf("Case 2: ");
            F = a*x*x+b*b*sin(x)+c;
        }
        else
        {
            //printf("Case 3: ");
            F = (cos(x)+a)/c;
        }
        
        printf("%i: x = %.3f \t F = %.3f \n", n,x,F);
        x = x + px;
    }
    
    return 0;
}