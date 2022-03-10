#include<stdio.h>

int main(void)
{
	int num;
	printf("10진수 정수 입력 : ");
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