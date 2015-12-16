#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c,D;
    float x1,x2;
    printf("Enter a:");
    scanf("%d",&a);
    printf("Enter b:");
    scanf("%d",&b);
    printf("Enter c:");
    scanf("%d",&c);
    D=b*b-4*a*c;
    if(D<0){
        printf("-1");
    }
    else{
        x1=(-b+sqrt(D))/2*a;
        x2=(-b-sqrt(D))/2*a;
        printf("D=%d\n",D);
        printf("X1=%f\n",x1);
        printf("X2=%f\n",x2);
    }
    return 0;
}
