#include<Stdio.h>
#define	MAX(A, B)	((A)>(B) ? (A) : (B))

int main(void)
{
	int a, b;

	printf("ù ��° ������ �Է��ϼ��� : ");
	scanf_s("%d", &a);
	printf("�� ��° ������ �Է��ϼ��� : ");
	scanf_s("%d", &b);

	printf("�� ���� �� �� ū ���� %d �Դϴ�.", MAX(a, b));

	return 0;
}