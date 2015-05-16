#include<stdio.h>
#include<math.h>

int main()
{
	int prime(int x);
	int x;
	printf("请输入一个整数：");
	scanf("%d", &x);
	prime(x);
	return 0;
}
int prime(int x)
{
	int p, i, n = 0;
	p = sqrt(x);
	for (i = 2; i <= p; i++)
	{
		if (p % i == 0)
		{
			n = 1;
			continue;
		}
	}
	if (n == 0)
	{
		printf("%d为素数\n", x);
	}
	else
		printf("%d不为素数\n", x);
	return 0;
}
