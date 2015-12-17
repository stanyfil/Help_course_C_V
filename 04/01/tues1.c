#include<stdio.h>
#include<math.h>

int main() {

	int a, b, c, D;
	float x1 , x2;

	printf("Enter a = " );
	scanf("%d", &a);
	if(a == 0) {
		printf("Enter New a = ");
		scanf("%d", &a);
	}

	printf("Enter b = " );
	scanf("%d", &b);
	printf("Enter c = " );
	scanf("%d", &c);

	D = b*b - 4*a*c;
	if( D < 0) {
		printf("-1\n");
		return -1;
	}else {
		printf("D = %d\n" , D);
		x1 = ( -b - sqrt(D)) / (2*a);
		x2 = ( -b + sqrt(D)) / (2*a);
	}
	
	printf("x1 = %.2f\nx2 = %.2f\n", x1, x2);

	return 0;
}



	
	
