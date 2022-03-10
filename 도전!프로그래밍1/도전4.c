#include<stdio.h>

int main(void)
{
	int money=3500;

	printf("현재 당신이 소유하고 있는 금액 : %d\n", money);
	
	int x, y, z;

	for (x = 0; x <= 7; x++)
	{
		for (y = 0; y <= 5; y++)
		{
			for (z = 0; z <= 8; z++)
			{
				if ((x* 500 + y * 700 + z * 400) == money)
				{
					printf("크림빵 %d개, 새우깡 %d개, 콜라 %d개\n", x, y, z);
					break;
				}
				
			}
		}
	}
	printf("어떻게 구매하시겠습니까?");
	return 0;

}