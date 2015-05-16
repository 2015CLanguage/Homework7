Enter file contents here
# include <stdio.h>
int main()
{
	int lmw(int a);
	int x;
	printf("请输入一个整数：");
	scanf_s("%d", &x);
	x = lmw(x);
	return 0;
}
int lmw(int a)
{
	int c, i;
	if (a == 1)
		printf("是素数\n");
	else
	{
		for (i = 2; i < a; i++)
		{	if (i==a-1)
			{
			printf("是素数\n");
			break;
			}
			c = a%i;
			if (c == 0)
			{
				printf("不是素数\n");
				break;
			}
		}
		
	}
	return 0;
}
