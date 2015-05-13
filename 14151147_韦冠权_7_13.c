#include<stdio.h>
int main()
{
	int n, x;
	float p,Pn(int n, int x);
	printf("输入n和x的值：\t");
	scanf_s("%d%d", &n, &x);
	p = Pn(n, x);
	printf("n=%d,x=%d  时,\nP%d(%d)=%7.3f\n", n, x, n, x, p);
	return 0;
}
float Pn(int n, int x)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
		return(2 * n - 1)*x*Pn((n - 1), x) - (n - 1)*Pn((n - 2), x) / n;
}
