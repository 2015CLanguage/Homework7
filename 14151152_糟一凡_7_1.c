#include<stdio.h>
int gcd(int x,int y)
{
	int r=1;
	while(r!=0)
	{
		r=x%y;
		x=y;
		y=r;
	}
	return x;
}
int lcm(int x,int y)
{
	return((x*y)/gcd(x,y));
}
int main()
{
	int a,b,t;
	printf("请输入两个整数：");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		t=a;
		a=b;
		b=t;
	}
	printf("两个函数的最大公约数为：%d\n",gcd(a,b));
	printf("两个函数的最小公倍数为：%d\n",lcm(a,b));
	return 0;
}
