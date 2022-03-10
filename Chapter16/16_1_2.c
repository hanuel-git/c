#include<stdio.h>

int main(void)
{
	int i, j;

	int arra[2][4] = {
		{1, 2, 3, 4},
		{5, 6, 7, 8}
	};

	printf("배열a\n");
	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d", arra[i][j]);
			if (j == 3)
				printf("\n");
		}
	}

	int arrb[4][2];

	printf("\n배열b\n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			arrb[i][j] = arra[j][i];
			printf("%d", arrb[i][j]);
			if (j == 1)
				printf("\n");
		}

	}
	return 0;
}