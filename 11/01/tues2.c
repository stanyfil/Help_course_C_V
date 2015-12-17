#include<stdio.h>

int main()
{
	int U = 12;
	float R1,R2,R3,R4,R23,R234,Re,U1,U2,U3,U4,U23,I,I1,I2;
	do{	
		printf("Enter R1:");
		scanf("%f", &R1);
	}while(R1<0);

	do{
		printf("Enter R2:");
		scanf("%f", &R2);
	}while(R2<0);

	do{
		printf("Enter R3:");
		scanf("%f", &R3);
	}while(R3<0);

	do{
		printf("Enter R4:");
		scanf("%f", &R4);
	}while(R4<0);
	R23 = R2 + R3;
	R234 = (R23 * R4) / (R23 + R4);
	Re = R234+R1;
	I =U / Re;
	U1 = I * R1;
	U2 = I * R2;
	U3 = I * R3;
	U23 = U - U1;	
	U4 = U23;
	I1 = U23 / R23;
	I2 = U4 / R4;
	printf("\nU1=%f", U1);
	printf("\nU2=%f", U2);
	printf("\nU3=%f", U3);
	printf("\nI1=%f", I1);
	printf("\nI2=%f", I2);
	printf("\n");


}
