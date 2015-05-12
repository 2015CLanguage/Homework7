#include<stdio.h>
int a;
int panduan(int a)
{
	int i;
	i = 2;
	if (a == 2)
	{
		printf("是素数\n");
	}
	else
	{
		while (i < a)
		{
			if (a%i == 0)
			{
				printf("不是素数\n");
				break;
			}
			printf("是素数\n");
		}
	}
	return 0;
}
void main()
{ 
	printf("请输入一个整数\n");
	scanf_s("%d", &a);
	panduan(a);
}
