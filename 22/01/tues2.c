#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r1,r2,r3,r4,it,i1,i2,u1,u2,u3,u4,re;
    int u=12;
    printf("\n Enter r1:");
    scanf("%f",&r1);
    printf("\n Enter r2:");
    scanf("%f",&r2);
    printf("\n Enter r3:");
    scanf("%f",&r3);
    printf("\n Enter r4:");
    scanf("%f",&r4);
    if(r1<=0 && r2<=0 && r3<=0 && r4<=0)
        return -1;

    re=((r2+r3)*r4)/(r2+r3+r4)+r1;
    it=u/re;
    u1=it*r1;
    u4=u-u1;
    i2=u4/r4;
    i1=it-i2;
    u2=i1*r2;
    u3=i1*r3;
    printf("\n u1=%f",u1);
    printf("\n u2=%f",u2);
    printf("\n u3=%f",u3);
    printf("\n u4=%f",u4);
    printf("\n i1=%f",i1);
    printf("\n i2=%f",i2);

    return 0;
}
