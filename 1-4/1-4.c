#include <stdio.h>

int main()
{
	int myMoney = 3500;
	int cream = 500;
	int shrimpCrackers = 700;
	int cola = 400;
	int i, j, k;
	printf("���� ����� �����ϰ� �ִ� �ݾ� : %d\n", myMoney);

	for (i = 1; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			for (k = 1; k < 100; k++)
			{
				if ((i * cream + j * shrimpCrackers + k * cola) == myMoney)
				{
					printf("ũ���� %d�� , ����� %d�� , �ݶ�%d�� \n", i, j, k);
				}

			}
		}
	}
	printf("��� �����Ͻðڽ��ϱ�?");

	return 0;
}   

