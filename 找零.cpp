#include <stdio.h>
int main()
{
	int price=0;
//	price=10;
	 int amount=100;
	printf("请输入金额（元）\n");
	scanf("%d",&price);
	printf("请输入输入票面(元)\n");
	scanf("%d",&amount);
	int change=amount-price;
	printf("找你%d元\n",change);
	return 0;
}
