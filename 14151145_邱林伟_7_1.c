#include<stdio.h>
void main()
{
	int max(int a,int b);
	int min(int a,int b);
	int x,y;
	printf("请输入两个整数:");
	scanf("%d,%d",&x,&y);
	printf("它们的最大公约数为:%d\n",max(x,y));
	printf("它们的最小公倍数为:%d\n",min(x,y));
}

int max(int a,int b)
{
	int c,d;
	if(a<b)
	{c=a;
	 a=b;
	 b=c;}
    while((a%b)!=0)     //辗转相除法
	{
		d=a%b;
		a=b;
		b=d;}
	return b;
}

int min(int a,int b)
{
	int e;
	e=(a*b)/max(a,b);
	return e;
}
