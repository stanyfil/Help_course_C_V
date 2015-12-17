#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,D;
    float x1,x2;
    printf("\nEnter a:");
    scanf("%d", &a);
    while (a==0)
    {
        printf("\nWARNING: a=0\nEnter a:");
        scanf("%d", &a);
    }
    printf("\nEnter b:");
    scanf("%d", &b);
    printf("\nEnter c:");
    scanf("%d", &c);
    D=(b*b)-(4*a*c);
    if (D<0)
    {
        printf("\nERROR: D=%d", D);
    }
    if (D>=0)
    {
        printf("\nD=%d",D);
        x1=(-b+sqrt(D))/(2*a);
        printf("\nx1=%.2f",x1);
        x2=(-b-sqrt(D))/(2*a);
        printf("\nx2=%.2f",x2);
    }
};
