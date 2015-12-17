#include <stdio.h>
#include <stdlib.h>

void main()
{
    int U=12;
    float R1,R2,R3,R4,R23,R123,R,IT,U1,U2,U3,U4,I1,I2;
    scanf("%f", &R1);
    scanf("%f", &R2);
    scanf("%f", &R3);
    scanf("%f", &R4);
    if(R1<=0)
    {
        while(R1<=0)
        {
         scanf("%f",&R1);
        }

    }
    if(R2<=0);
    {
        while(R2<=0)
        {
            scanf("%f",&R2);
        }
    }
    if(R3<=0)
    {
        while(R3<=0)
        {
            scanf("%f",&R3);
        }
    }
    if(R4<=0)
    {
        while(R4<=0)
        {
            scanf("%f",&R4);
        }
    }
    R23=R2+R3;
    R123=R1*R23/R1+R23;
    R=R123+R4;
    IT=U/R;
    U1=IT*R1;
    U2=IT*R2;
    U3=IT*R3;
    U4=U2+U3;
    I1=U1/R1;
    I2=U2/R2;
    printf("U1=%f\n",U1);
    printf("U2=%f\n",U2);
    printf("U3=%f\n",U3);
    printf("I1=%f\n",I1);
    printf("I2=%f\n",I2);

}
