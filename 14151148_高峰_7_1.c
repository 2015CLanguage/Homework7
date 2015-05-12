#include<stdio.h>
int GYS(int m,int n);
int GBS(int m,int n);
int GYS(int m,int n)
{	
	int a,b,i,r;
	if(m>n)
	{
		a=m;
		b=n;
	}
	else
	{
		a=n;
		b=m;
	}
	r=a/b;
	i=a-r*b;
	while(i!=0)
	{
		a=b;
		b=i;
		r=a/b;
		i=a-r*b;
	}
	return b;
}

int GBS(int m,int n)
{
	int s;
	s=GYS(m,n)*(m/GYS(m,n))*(n/GYS(m,n));
	return s;
}
int main()
{
	int m,n;
	printf("请分别输入两个整数。\n");
	printf("m=");
	scanf("%d",&m);
	printf("n=");
	scanf("%d",&n);
	printf("最大公约数为%d\n最小公倍数为%d\n",GYS(m,n),GBS(m,n));
	return 0;
}
