#include<stdio.h>

void SimpleFuncOne(int* ptr1, int* ptr2) 
{

}

void SimpleFuncTwo(int(*ptr1)[4], int(*ptr2)[4])
{

}

int main(void)
{
	int arr1[3];
	int arr2[4];
	int arr3[3][4];
	int arr4[2][4];

	SimpleFuncOne(arr1, arr2);
	SimpleFunc0ne(arr3, arr4);

}