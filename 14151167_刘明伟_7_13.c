Enter file contents here
常规：
# include <stdio.h>
int main()
{
	float lmw(float n, float x);
	int m;
	float y, z;
	printf("请输入一个整数：");
	scanf_s("%d", &m);
	printf("请输入一个实数：");
	scanf_s("%f", &y);
	z = lmw(m, y);
	printf("函数值是%.2f", z);
	return 0;
}
float lmw(float n, float x)
{
	float a, b, e = 1, f = x, g, h, j;
	int i;

	if (n == 0)
		a = 1;
	else if (n == 1)
		a = x;
	else
	{
		
		for (i = 2; i <= n; i++)
		{
			b = (2 * i - 1)*x;
			g = b*f- ((i - 1)*e) / i;
			e = f;
			f = g;
		}
		a = g;
	}
	return a;
}
递归：
# include<stdio.h>
int main()
{
	int x, n;
	float p(int, int);
	printf("输入一个整数n：");
	scanf_s("%d", &n);
	printf("请输入一个实数x：");
	scanf_s("%d", &x);
	printf("P%d(%d)=%5.3f\n", n, x, p(n, x));
	return 0;
}
float p(int n, int x)
{
	if (n == 0)
		return(1);
	else if (n == 1)
		return(x);
	else
		return(2 * n - 1)*x*p((n - 1), x) - (n - 1)*p((n - 2), x) / n;

}
