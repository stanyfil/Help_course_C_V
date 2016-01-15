#include <stdio.h>

int main()
{
	int i,i1=1,product;
	float price=0,arr_price[5]={1.0,2.0,1000.0,0.50,14.0};
	printf("\nEnter number of products: ");
	scanf("%d",&i);
	do
	{
		do
		{
			printf("Enter code:");
			scanf("%d",&product);
			if (product<0||product>4)
			{
				printf("Enter new code:");
				scanf("%d",&product);
			}
		}
		while(product<0&&product>4);
		switch(product)
		{
			case 0:price=price+arr_price[0];break;
			case 1:price=price+arr_price[1];break;
			case 2:price=price+arr_price[2];break;
			case 3:price=price+arr_price[3];break;
			case 4:price=price+arr_price[4];break;
		}
		i1++;
	}
	while(i1<=i);
	printf("%.2f\n",price);
}
