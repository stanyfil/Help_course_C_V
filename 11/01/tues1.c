#include <stdio.h>
#include <math.h>
int main()
{
    int D;
    float a,b,c;
    float x1,x2;
    printf("Enter a:");
    scanf("%f",&a);
    printf("Enter b:");
    scanf("%f",&b);
    printf("Enter c:");
    scanf("%f",&c);
    D=b*b-4*a*c;
    if(D<0){
        printf("-1");
    }
    else{
	if(a==0){
		x1=-c/b;
		printf("X=%f\n",x1);
	}
	else{
		if(D>0){
        x1=(-b+sqrt(D))/2*a;
        x2=(-b-sqrt(D))/2*a;
        printf("D=%d\n",D);
        printf("X1=%f\n",x1);
        printf("X2=%f\n",x2);
		}
		else{
			x1=-b/2*a;
        		x2=x1;
        		printf("D=%d\n",D);
			printf("X1=X2=%f\n",x1);

		}
	}
    }
    return 0;
}
