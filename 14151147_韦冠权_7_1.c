#include<stdio.h>
int main()

{
	int H(int a, int b);
	int L(int a, int b, int m);
	int a, b, m, n;
	scanf("%d%d", &a, &b);
	m = H(a, b);
	printf("最大公约数是：%d\n", m);
	n = L(a, b, m);
	printf("最小公倍数是：%d\n", n);
	return 0;
}
int H(int a, int b)
{
	int temp, r;
	if (b>a)
	{
		temp = a;
		a = b;
		b = temp;
	}

	while ((r = a%b) != 0) //辗转相除
	{
		a = b;
		b = r;
	}
	return b;

}
int L(int a, int b, int m)
{
	int n;
	n = a*b / m;
	return n;
}
