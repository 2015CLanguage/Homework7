#include<stdio.h>
int main()
{	
	int x, n;
	printf("依次输入x和n的值：");
	scanf("%d,%d", &x, &n);
	float p(int n, int x);
	printf("公式的值P%d(%d)=%5.2f\n", n, x,p(n,x));
	return 0;
}
float p(int n,int x)
{
	if (n == 0)
		return(1);
	else if (n == 1)
		return(x);
	else
		return(2 * n - 1)*x*p((n - 1), x) - (n - 1)*p((n - 2), x) / n;
}
