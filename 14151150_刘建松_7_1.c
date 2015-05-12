#include<stdio.h>
int largest(int x,int y);
int smallest(int x,int y);
int main()
{
	int a,b,c,d;
	printf("请输入两个整数（用逗号连接）：");
	scanf("%d,%d",&a,&b);
	c=largest(a,b);
	d=smallest(a,b);
	printf("最大公约数为：%d;最小公倍数为%d。\n",c,d);
	return 0;
}
int largest(int x,int y)
{
	int i,j;
	if(y>x)
	{
		i=x;
		x=y;
		y=i;
	}
	while((j=x%y)!=0)
	{
		x=y;
		y=j;
	}
	return y;
}
int smallest(int x,int y)
{
	int m;
	m=x*y/largest(x,y);
	return m;
}
