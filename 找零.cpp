#include <stdio.h>
int main()
{
	int price=0;
//	price=10;
	 int amount=100;
	printf("�������Ԫ��\n");
	scanf("%d",&price);
	printf("����������Ʊ��(Ԫ)\n");
	scanf("%d",&amount);
	int change=amount-price;
	printf("����%dԪ\n",change);
	return 0;
}
