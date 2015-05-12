#include<stdio.h>
int max(int a, int b)
{
	int m, i, c;
	if (a > b)
		m = b;
	else
		m = a;
	i = 1;
	while (i <= m)
	{
		if (a%i == 0 && b%i == 0){
			c = i;
		}
		i++;
	}
	return  c;
}
int min(int a, int b)
{
	int m, i, c;
	if (a > b)
		m = a;
	else
		m = b;
	i = m;
	while (i <= (a*b))
	{
		if (i%a == 0 && i%b == 0){
			c = i;
			break;
		}
		i++;
	}
	return c;
}
void main()
{
	int a, b,zd, zx;
	printf("请输入两个整数：\n");
	scanf_s("%d%d", &a,&b);
	zd = max(a, b);
	zx = min(a, b);
	printf("最大公约数为%d，最小公倍数为%d。\n", zd, zx);
}
