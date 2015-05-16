Enter file contents here
# include <stdio.h>
int main()
{
	int tnt(int a, int b);
	int ntn(int c, int d);
	int m, n, x, y;
	printf("请输入两个正整数：");
	scanf_s("%d,%d", &x, &y);
	m = tnt(x, y);
	n = ntn(x, y);
	printf("这两个数的最大公约数%d最小公倍数%d。\n", m, n);
	return 0;
}
int tnt(int a, int b)
{
	int f, g, h;
	if (b > a)
	{
		g = a;
		a = b;
		b = g;
	}
	while (b != 0)
	{
		f = a%b;
		a = b;
		b = f;
	}
	h = a;
	return h;
}
int ntn(int c, int d)
{
	int f, g, i, j, h;
	i = c*d;
	if (d > c)
	{
		g = c;
		c = d;
		d = g;
	}

	while (d != 0)
	{
		f = c%d;
		c = d;
		d = f;
	}
	h = c;
	j = i / h;
	return j;
}
