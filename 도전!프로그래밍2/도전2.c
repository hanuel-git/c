#include<stdio.h>

int main(void)
{
	int num;
	printf("10���� ���� �Է� : ");
	scanf_s("%d", &num);
	
	for (int i = 0; i < 10000; i++)
	{
		printf("%d", num % 2);
		num = num / 2;
		if (num == 1)
		{
			printf("1");
			break;
		}
	}

	return 0;
}