#include<stdio.h>

int main(void)
{
	int arr[10];
	printf("�� 10���� ���� �Է�\n");

	int cnt_odd = 0;
	int cnt_even = 0;

	for (int i = 0; i < 10; i++)
	{
		int basket;
		printf("�Է� :");
		scanf_s("%d", &basket);

		if (basket % 2 == 1)
		{
			arr[cnt_odd] = basket;
			cnt_odd++;
		}
		if (basket % 2 == 0)
		{
			arr[9-cnt_even] = basket;
			cnt_even++;
		}
	}

	for (int i = 0; i < 10; i++)
		printf("%d ", arr[i]);

	return 0;
}
