#include<stdio.h>
#include<math.h>
int main()
{
	int prime_number(int);
	int n;
	printf("请输入一个数：");
	scanf("%d", &n);
	if (prime_number(n))
		printf("%d是一个素数。\n", n);
	else
		printf("%d不是素数。\n", n);
	return 0;
}
int prime_number(int n)
{
	int i,a=1;
	if (n == 1)
		a = 0;
	for (i = 2; i <= n / 2 && a == 1; i++)
	{
		if (n%i == 0)
			a = 0;
	}
	return(a);
}
