#include <stdio.h>

int main()
{
	int myMoney = 3500;
	int cream = 500;
	int shrimpCrackers = 700;
	int cola = 400;
	int i, j, k;
	printf("현재 당신이 소유하고 있는 금액 : %d\n", myMoney);

	for (i = 1; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			for (k = 1; k < 100; k++)
			{
				if ((i * cream + j * shrimpCrackers + k * cola) == myMoney)
				{
					printf("크림빵 %d개 , 새우깡 %d개 , 콜라%d개 \n", i, j, k);
				}

			}
		}
	}
	printf("어떻게 구입하시겠습니까?");

	return 0;
}   

