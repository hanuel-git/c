#include<stdio.h>

int main(void)
{
	int money=3500;

	printf("���� ����� �����ϰ� �ִ� �ݾ� : %d\n", money);
	
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = 0; y <= 5; y++)
		{
			for (z = 0; z <= 8; z++)
			{
				if ((x* 500 + y * 700 + z * 400) == money)
				{
					printf("ũ���� %d��, ����� %d��, �ݶ� %d��\n", x, y, z);
					break;
				}
				
			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?");
	return 0;

}