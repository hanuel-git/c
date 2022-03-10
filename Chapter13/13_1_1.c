#include<stdio.h>

int main(void)
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	int * ptr = arr; // int * ptr = &arr[0]

	printf("First : %d %d %d %d %d\n", arr[0], arr[1], arr[2], arr[3], arr[4]);
	*ptr += 2;
	*(++ptr) += 2;
	*(++ptr) += 2;
	*(++ptr) += 2;
	*(++ptr) += 2;

	printf("Final : %d %d %d %d %d", arr[0], arr[1], arr[2], arr[3], arr[4]);

	return 0;

}