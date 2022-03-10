#include<stdio.h>

int main(void)
{
	int arr[5][5];
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("성적을 입력하시오:");
			scanf_s("%d", &arr[i][j]);
		}
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			arr[i][4] += arr[i][j];
			arr[4][j] += arr[i][j];
		}
	}

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 5; j++)
		{
			printf("%d", arr[i][j]);
			if (j == 4)
				printf("\n");
		}
	}
}