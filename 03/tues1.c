#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void main()
{
    float a,b,c,D,x1,x2;
    printf("a=");
    scanf("%f",&a);
    if(a==0)
    {
        scanf("%f",&a);
    }
    printf("b=");
    scanf("%f",&b);
    printf("c=");
    scanf("%f",&c);
    D=b*b-4*a*c;
    if(D<0)
    {
        printf("nqma reshenie D<0\n");
    }
    else
    {
        printf("D=%f\n",D);
        x1=(-b+sqrt(D))/(2*a);
        x2=(-b-sqrt(D))/(2*a);
        printf("x1=%f\n", x1);
        printf("x2=%f\n", x2);
    }

}

