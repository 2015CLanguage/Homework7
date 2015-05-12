#include<stdio.h>
int maxy(int x,int y);
int minb(int x,int y);
int maxy(int x,int y)
{
	int m,n;
	if(x<y)
	{
		m=x;
	    x=y;
	    y=m;
	}
    while((x%y)!=0)
	{
		n=x%y;
		x=y;
		y=n;
	}
	return y;
}
int minb(int x,int y)
{
	int i;
	i=(x*y)/maxy(x,y);
	return i;
}
void main()
{
	int a,b;
	printf("请依次输入两个整数:");
	scanf("%d,%d",&a,&b);
	printf("这两个数的最大公约数是:%d\n",maxy(a,b));
	printf("这两个数的最小公倍数是:%d\n",minb(a,b));
}
