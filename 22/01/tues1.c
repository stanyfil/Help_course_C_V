#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a,b,c,d,x1,x2;

    printf("\n Enter a:");
    scanf("%f",&a);
    if(a==0)
        return -1;
    printf("\n Enter b:");
    scanf("%f",&b);
    printf("\n Enter c:");
    scanf("%f",&c);
    d=b*b-4*a*c;
    if(d<0)
        return -1;
    else{
        x1=(-b-sqrt(d))/(2*a);
        x2=(-b+sqrt(d))/(2*a);
    }
    if(x1==x2)
        printf("\n x1=x2=%f",x1);
    else{
        printf("\n x2=%f",x2);
        printf("\n x1=%f",x1);
    }

    return 0;

}
