#include <stdio.h>

void googoo(int a, int b)
{
	int i;

	while (a <= b)
	{
		printf("%d단\n", a);
		for (i = 1; i <= 9; i++)
		{
			printf("%d * %d = %d\n", a, i, a * i);
		}
		a++;
	}
}

int main()
{
	int a, b;

	printf("서로 다른 두 개의 정수를 차례로 입력하세요 : ");
	scanf_s("%d %d", &a, &b);

	if (a < b)
		googoo(a, b);
	else
		googoo(b, a);

	return 0;

}