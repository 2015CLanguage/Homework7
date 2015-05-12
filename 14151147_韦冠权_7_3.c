#include<stdio.h>
int i = 2;
int main()
{
	int p(int);
	int n;
	printf("输入一个整数：");
	scanf_s("%d", &n);
	if (n%i == 0&&(n/i>1))
	{
		printf("%d不是一个素数\n", n);  //大于2且能整除2的数一定不是素数
	}
	else
	{
		p(n);
		if (i<n / 2)
		{
			printf("%d不是一个素数\n",n);
		}
		else if (i >=n / 2)
		{
			printf("%d是一个素数\n",n);
		}
	}
	return 0;
}
int p(int n)  //依据循环结束前是否能找到整数n的一半的因数作为判断条件
{
	int r=n%i;
	
	while (i < n/2&&(r!=0))
	{
		
		i = i + 1;
		r = n%i;
	}
	

	return i;
}
