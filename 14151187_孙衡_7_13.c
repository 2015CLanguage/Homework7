#include<stdio.h>
float P(int n, int x);
void main()
{
	int x, n;
	printf("n=");
	scanf_s("%d", &n);
	printf("x=");
	scanf_s("%d", &x);
	printf("%f\n", P(n, x));
}
float P(int n, int x)
{
	if (n == 0)
		return 1;
	else if (n == 1)
		return x;
	else
		return ((2 * n - 1)*x - P((n - 1), x) - (n - 1)*P((n - 2), x)) / n;
}
