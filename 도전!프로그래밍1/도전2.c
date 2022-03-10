#include<stdio.h>

void googoodan(int a, int b)
{
	if (a > b)
	{
		int basket;
		basket = a;
		a = b;
		b = basket;
	}
	
	int i;

	for (i = a; i <= b; i++)
	{
		int dan = 1;
		while (dan <= 9)
		{
			printf("%d x %d = %d\n", i, dan, i * dan);
			dan++;
		}
		if (dan == 10)
			printf("\n");
	}

}

int main(void)
{
	int a, b;
	printf("Please enter two number : ");
	scanf_s("%d %d", &a, &b);
	googoodan(a, b);

	return 0;
}