#include <stdio.h>

int main(){
	int U = 12, R1, R2, R3, R4;
	float Re, U1, U2, U4, It, I1, I2;  
	printf("Enter R1:");
	scanf("%d", &R1);
	printf("Enter R2:");
        scanf("%d", &R2);
	printf("Enter R3:");
        scanf("%d", &R3);
	printf("Enter R4:");
        scanf("%d", &R4);
	if (R1 <= 0){
		printf("Enter R1 again:");
	        scanf("%d", &R1);
	}
	
	if (R2 <= 0){
		printf("Enter R2 again:");
	        scanf("%d", &R2);
	}
	
	if (R3 <= 0){
		printf("Enter R3 again:");
        	scanf("%d", &R3);
	}
	
	if (R4 <= 0){
		printf("Enter R4 again:");
	        scanf("%d", &R4);
	}
	
	Re = (R2 * R3)/(R2 + R3);
	Re = (Re * R4)/(Re + R4);
	Re = Re + R1;
	It = U / Re;
	U1 = It * R1;
	U2 = U - U1;
	U4 = U - U1;
	I1 = U2 / (R2 + R3);
	I2 = U4 / R4;
	printf ("U1 = %fV\n", U1);
	printf ("U2 = U3 = %fV\n", U2);
	printf("U4 = %fV\n", U4);
	printf("I1 = %fA\n", I1);
	printf("I2 = %fA\n", I2);

	return 0;
}

