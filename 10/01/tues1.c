#include <math.h>
#include <stdio.h>

int main()
{
float a,b,c,d,x1,x2;

 printf("Vavedete a:");
 scanf("%f", &a);
	if(a == 0){
	scanf("%f",&a);
}
 printf("Vavedete b:");
 scanf("%f", &b);
 printf("Vavedete c:");
 scanf("%f", &c);

 d = b*b - 4*a*c;
 printf("d=%f \n", d);

 if (d<0)
 {
 printf("Kvadratnoto uravnenie nqma realni koreni\n");
 }
else
{

   x1 = (-b+sqrt(d))/(2*a);
   x2 = (-b-sqrt(d))/(2*a);
  printf("x1=%f",x1);
  printf("x2=%f",x2);

}
 return 0;
}
