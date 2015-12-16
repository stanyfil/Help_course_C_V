#include <stdio.h>
#include <math.h>

int main()
{
    int a, b, c, d;
    float x1, x2, x;
    printf("Enter a: "); scanf("%d", &a);
    printf("Enter b: "); scanf("%d", &b);
    printf("Enter c: "); scanf("%d", &c);
    d = pow(b,2)-4*a*c;
    if(d < 0)
        printf("-1");
    else{
        if(a == 0){
        x = -(c/b);
        printf("\nx= %.2f", x);
        } else{
            x1 = (-b+sqrt(d))/2*a;
            x2 = (-b-sqrt(d))/2*a;
        }
        printf("\nD= %d", d);
        printf("\nx1= %.2f\n", x1);
        printf("x2= %.2f", x2);
    }
    return 0;
}
