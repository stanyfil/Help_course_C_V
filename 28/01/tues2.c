#include <stdio.h>

int main()
{
    int U=12,R1,R2,R3,R4,R23;
    float R234,Re,It,I1,I2,U1,U2,U3,U4;
    printf("\nEnter R1:");
    scanf("%f", &R1);
    if (R1<=0)
    {
        printf("\nWARNING: R1<=0\nEnter R1:");
        scanf("%f", &R1);
    }
    printf("Enter R2:");
    scanf("%f", &R2);
    if (R2<=0)
    {
        printf("\nWARNING: R2<=0\nEnter R2:");
        scanf("%f", &R2);
    }
    printf("Enter R3:");
    scanf("%f", &R3);
    if (R3<=0)
    {
        printf("\nWARNING: R3<=0\nEnter R3:");
        scanf("%f", &R3);
    }
    printf("Enter R4:");
    scanf("%f", &R4);
    if (R4<=0)
    {
        printf("\nWARNING: R4<=0\nEnter R4:");
        scanf("%f", &R4);
    }
    R23=R2+R3;
    R234=(R23*R4)/(R23+R4);
    Re=R1+R234;
    It=U/Re;
    U1=It*R1;
    U4=U-U1;
    I2=U4/R4;
    I1=It-I2;
    U2=I1*R2;
    U3=I1*R3;
    printf("\nU1=%.2f",U1);
    printf("\nU2=%.2f",U2);
    printf("\nU3=%.2f",U3);
    printf("\nU4=%.2f",U4);
    printf("\nI1=%.2f",I1);
    printf("\nI2=%.2f",I2);
};
