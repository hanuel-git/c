#include<stdio.h>
#define	ADD(X,Y,Z)	((X)+(Y)+(Z))
#define MUL(X,Y,Z)	((X)*(Y)*(Z))

int main(Void)
{
	int a, b, c;
	
	printf("ù ��° ������ �Է��ϼ��� : ");
	scanf_s("%d", &a);

	printf("�� ��° ������ �Է��ϼ��� : ");
	scanf_s("%d", &b);

	printf("�� ��° ������ �Է��ϼ��� : ");
	scanf_s("%d", &c);

	printf("�� ������ ������� : %d \n", ADD(a, b, c));
	printf("�� ������ ������� : %d", MUL(a, b, c));

	return 0;
}