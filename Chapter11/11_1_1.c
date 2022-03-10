#include<stdio.h>

int main(void)
{
	int arr[5];
	for (int i = 0; i < 5; i++)
	{
		printf("Enter the number: ");
		scanf_s("%d", &arr[i]);
	}

	int big=arr[0], small=arr[0], sum=0;

	for (int i = 0; i < 5; i++)
	{
		if (big < arr[i])
			big = arr[i];

		if (small > arr[i])
			small = arr[i];

		sum += arr[i];
	}

	printf("\nThe biggest is %d\n", big);
	printf("The smallest is %d\n", small);
	printf("The sum is %d\n", sum);

	return 0;
}