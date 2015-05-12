#include<stdio.h>
int judgeprime(int);
void main()
{
	int n;
	printf("请输入一个大于2的整数:\n");      //输入
	scanf_s("%d", &n);
	if (judgeprime(n) == 1)                //调用函数判断是否为素数
		printf("%d不是素数\n", n);
	else
		printf("%d是素数\n", n);
}
int judgeprime(int n)                 //定义函数
{
	int  i, k = 0;
	for (i = 2; i <= n/2 && k == 0; i++)
	{
		if (n%i == 0)
			k = 1;
	}
	return k;
}
