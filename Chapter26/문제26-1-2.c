#include<Stdio.h>
#define	PI	3.14
#define	AREA(R)	((R)*(R)*PI)

int main(void)
{
	float r;
	printf("반지름을 입력하세요 : ");
	scanf_s("%f", &r);

	printf("원의 넓이는 %.2f 입니다.", AREA(r));

	return 0;
}