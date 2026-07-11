#include<stdio.h>

int main()
{
	int price=0;

	printf("Please enter amount(yuan): ");
	scanf_s("%d", &price);

	int change=100-price;
	printf("Change: %d yuan\n", change);

	return 0;
}