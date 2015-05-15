#include "stdafx.h"
#include "stdio.h"
float fun(int n, float x);
int main()
{
	int n;
	float x,p;
	printf("请依次输入n和x：");
	scanf("%d%f", &n, &x);
	p = fun(n, x);
	printf("所得结果为:%8.2f\n", p);
}
float fun(int n, float x)
{
	int i;
	float p[100];             //数组长度可随需要进行更改，但不能比n小。 
	p[0] = 1; p[1] = x;
	for (i = 1; i<n; i++)
	{
		p[i + 1] = (2 * (i + 1) - 1)*x - p[i] - n*p[i - 1] / (i + 1);
	}
	return p[i];
}
