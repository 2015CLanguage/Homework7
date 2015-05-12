#include "stdio.h"
float p(int, int);
void main()
{
	int n, x;
	printf("请输入n和x:\n");
	scanf_s("%d%d", &n, &x);          //输入n,x
	printf("P%d(%d)=%.2f\n", n, x, p(n, x));
}
float p(int n, int x)                //定义函数递归计算
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
		return ((2 * n - 1)*x - p((n - 1), x) - (n - 1)*p((n - 2), x)) / n;
}
