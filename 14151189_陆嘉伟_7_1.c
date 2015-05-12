#include<stdio.h>
int main()
{
	int max(int a,int b);
	int min(int a,int b);
	int a,b,x,y;
	printf("请输入两个数：");
	scanf("%d,%d",&a,&b);
	x=max(a,b);
	y=min(a,b);
	printf("最大公约数是：%d\n",x);
	printf("最小公倍数是：%d\n",y);
	return 0;
}

int max(int a,int b)
{
	int t,r;
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;
}
int min(int a,int b)
{
	int x,y;
	x=max(a,b);
	y=a*b/x;
	return y;
}
