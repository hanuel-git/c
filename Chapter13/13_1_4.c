#include<stdio.h>

int main(void)
{
	int arr[6] = { 1, 2, 3, 4, 5, 6 };
	int * front = &arr[0];
	int * back = &arr[5];
	int basket;
	printf("First arr : %d %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

	for (int i = 0; i < 3; i++)
	{
		basket = *front;
		*front = *back;
		*back = basket;

		front++;
		back--;
	}

	printf("Final arr : %d %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4], arr[5]);

	return 0;
}