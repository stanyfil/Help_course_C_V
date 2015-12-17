#include <stdio.h>
#include <math.h>
	

int main()

{
	float U=12,R1,R2,R3,R4,R23,R234,R,U23,U1;
	float I,I1,I2;
	n1:printf("R1=");
	scanf("%f",&R1);
	printf("R2=");
	scanf("%f",&R2);
	printf("R3=");
	scanf("%f",&R3);
	printf("R4=");
	scanf("%f",&R4);

	R23=R2+R3;
	printf("R23=%f \n",R23);

	R234=(R23*R4)/(R4+R23);
	printf("R234=%f \n",R234);

	R=R1+R234;
	printf("R=%f \n",R);
	if(R<=0){goto n1;}

	I=U/R;
	printf("I=%f  \n",I);
	
	U1=I*R1;
	printf("U1=%f \n",U1);

	U23=U-U1;
	printf("U23=%f \n",U23);

	I1=U23/R23;
	printf("I1=%f \n",I1);

	I2=U23/R4;
        printf("I2=%f \n",I2);

		
return 0;

}
