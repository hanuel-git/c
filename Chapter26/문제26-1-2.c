#include<Stdio.h>
#define	PI	3.14
#define	AREA(R)	((R)*(R)*PI)

int main(void)
{
	float r;
	printf("�������� �Է��ϼ��� : ");
	scanf_s("%f", &r);

	printf("���� ���̴� %.2f �Դϴ�.", AREA(r));

	return 0;
}