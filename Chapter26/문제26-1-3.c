#include<Stdio.h>
#define	MAX(A, B)	((A)>(B) ? (A) : (B))

int main(void)
{
	int a, b;

	printf("첫 번째 정수를 입력하세요 : ");
	scanf_s("%d", &a);
	printf("두 번째 정수를 입력하세요 : ");
	scanf_s("%d", &b);

	printf("두 정수 중 더 큰 값은 %d 입니다.", MAX(a, b));

	return 0;
}