#include<stdio.h>
int main()
{
	int fun(int x);
	int x,a;
	printf("输入一个整数：");
	scanf("%d",&x);
	a=fun(x);
	if(a==1)
		printf("%d不是素数\n",x);
	else
		printf("%d是素数\n",x);
	return 0;
}
int fun(int x)
{
	int i,flag;
	flag=0;
	for(i=2;i<=x/2;i++)
	{
		if(x%i==0)
		{
			flag=1;
			break;
		}
	}
	return flag;
}
