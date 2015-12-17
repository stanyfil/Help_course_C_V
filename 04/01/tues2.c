#include<stdio.h>


int main() {

	int R1, R2, R3, R4, R23, R234, Re;
	int U = 12;
	float I1, I2, It;
	float U1 , U2, U3, U4, U23;

	printf("Enter R1 = ");
	scanf("%d", &R1);
	if( R1<=0 ) {
		printf("Enter New R1 = ");
		scanf("%d", &R1);
	}

	printf("Enter R2 = ");
	scanf("%d", &R2);
	if( R2<=0 ) {
		printf("Enter New R2 = ");
		scanf("%d", &R2);
	}

	printf("Enter R3 = ");
	scanf("%d", &R3);
	if( R3<=0 ) {
		printf("Enter New R3 = ");
		scanf("%d", &R3);
	}

	printf("Enter R4 = ");
	scanf("%d", &R4);
	if( R4<=0 ) {
		printf("Enter New R4 = ");
		scanf("%d", &R4);
	}


	R23 = R2 + R3;
	R234 = (R23 * R4) / (R23 + R4);
	Re = R234 + R1;
	It = U / Re;
	U1 = It * R1;
	U4 = U - U1;
	U23 = U4;
	I1 = U23 / (R2 + R3);
	I2 = U4 / R4; 
	U2 = I1 * R2;
	U3 = I1 * R3;

	printf("U = %d\n" , U);
	printf("Re = %d\n" , Re);
	printf("It = %f\n" , It);
	printf("I1 = %f\n" , I1);
	printf("I2 = %f\n" , I2);
	printf("U1 = %f\n" , U1);
	printf("U2 = %f\n" , U2);
	printf("U3 = %f\n" , U3);
	printf("U4 = %f\n" , U4);


	return 0;
}
