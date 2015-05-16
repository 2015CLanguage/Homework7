#include<stdio.h>

int main()
{
	float x;
	int n;
	float ans(float x, int n);
	printf("请输入变量x，正整数n：");
	scanf("%f,%d", &x, &n);
	printf("x = %f 时，%d阶勒让德多项式的值P%d(%f)=%.2f。\n", x, n, n, x, ans(x, n));
	return 0;
}

float ans(float x, int n)
{
	int i;
	if (n == 0)
	{
		return 1;
	}
	else if (n == 1)
	{
		return (x);
	}
	else
	{
		return(((2 * n - 1) * x - ans(x, n - 1) - (n - 1) * ans(x, n - 2)) / n);
	}
}
