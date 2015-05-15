#include "stdio.h"
int max(int x,int y);
int min(int x,int y);
int main()
{
	int a,b,m,n;
	printf("请输入两个整数a,b : \n");
	scanf("%d,%d",&a,&b);
	m=max(a,b);
	n=min(a,b);
	printf("a,b的最大公约数为：%d\n",m);
	printf("a,b的最小公倍数为：%d\n",n);
	return 0;
}
int max(int x,int y)
{
	int z,i;
	if(x>y)
	{
		z=x;
		x=y;
		y=z;
	}
	for(i=x;i>0;i--)
	{
		if(x%i==0 && y%i==0)
		{
			z=i;
			break;
		}
	}
	return z;
}
int min(int x,int y)
{
	int z;
	z=x*y/max(x,y);
	return z;
}
