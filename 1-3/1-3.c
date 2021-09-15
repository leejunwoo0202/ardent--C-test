#include <stdio.h>

int main()
{
	int num1, num2 = 0;
	scanf_s("%d %d", &num1, &num2);
	int maxNum;
	if (num1 < num2)
	{
		maxNum = num2;
	}
	else
	{
		maxNum = num1;
	}

		

	for (int i = 2; i <= maxNum; i++)
	{
		if (num1 % i == 0)
		{
				if (num2 % i == 0)
				{
					printf("%d가 두 수의 최대공약수 입니다.", i);
				}

			
		}
	}

}