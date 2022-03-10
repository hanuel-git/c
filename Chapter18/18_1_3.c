#include<stdio.h>

void ComplexFuncOne(int** ptr1, int** ptr2)
{

}

void ComplexFuncTwo(int *((*ptr1)[5]), int *((*ptr2)[]

int main(void)
{
	int* arr1[3];
	int* arr2[3][5];
	int** arr3[5];
	int*** arr4[3][5];

	ComplexFuncOne(arr1, arr2);
	ComplexFuncTwo(arr3, arr4);

}
