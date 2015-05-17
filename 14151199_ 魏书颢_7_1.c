#include"stdio.h"
int Max,Min;
void max(int,int);
void min(int,int);
void main()
{
	int x,y;
	printf("请输入两个整数\n");
	scanf("%d,%d",&x,&y);
	max(x,y);
    min(x,y);
	printf("最小公倍数为%d\n",Min);
	printf("最大公约数为%d\n",Max);
}
void max(int x,int y)
{
	int t,r;
	if(y>x)
		t=y;
		y=x;
		x=t;
	while((r=x%y)!=0)
	{
		x=y;
		y=r;
	}
    Max=y;
}
void min(int x,int y)
{
	Min=(x*y)/Max;
}
