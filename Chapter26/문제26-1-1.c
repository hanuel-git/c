#include<stdio.h>
#define	ADD(X,Y,Z)	((X)+(Y)+(Z))
#define MUL(X,Y,Z)	((X)*(Y)*(Z))

int main(Void)
{
	int a, b, c;
	
	printf("첫 번째 정수를 입력하세요 : ");
	scanf_s("%d", &a);

	printf("두 번째 정수를 입력하세요 : ");
	scanf_s("%d", &b);

	printf("세 번째 정수를 입력하세요 : ");
	scanf_s("%d", &c);

	printf("세 정수의 덧셈결과 : %d \n", ADD(a, b, c));
	printf("세 정수의 곱셈결과 : %d", MUL(a, b, c));

	return 0;
}