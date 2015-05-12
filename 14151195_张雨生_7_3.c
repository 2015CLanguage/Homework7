#include<stdio.h>
int judge(int x)
{
	int i,z;
	for(i=2;i<x;i++)
	{
		if(x%i==0)
		{
			z=0;
		    break;
		}
		else
			z=1;
	}
	return z;
}
int main()
{
	int x;
	printf("请输入一个整数");
	scanf("%d",&x);
	if(judge(x))
		printf("%d是素数",x);
	else
		printf("%d不是素数",x);
	return 0;
}
