#include<stdio.h>

int main(void)
{
	char voca[10];
	int length=0;

	printf("Please enter voca :");
	scanf_s("%s",100, voca);

	while (voca[length] != 0)
		length++;

	printf("\nThe length is %d", length);
	
	return 0;

}