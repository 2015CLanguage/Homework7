#include"stdio.h"
int f(int x,int y);
int g(int x,int y,int h);
int main()
{
	int h,l,a,b;
	printf("请输入两个整数:");
	scanf("%d,%d",&a,&b);
	h=f(a,b);
	l=g(a,b,h);
	printf("两个整数的最大公约数为:%d\n",h);
	printf("两个整数的最小公倍数为:%d\n",l);
	return 0;
}
int f(int x,int y)
{
	int z,t;
	if(x>y)
	{t=x;x=y;y=t;}
    while((z=x%y)!=0)
	{x=y;y=z;}
	return y;
}
int g(int x,int y,int h)
{
	int k;
	k=x*y/h;
	return k;
}
