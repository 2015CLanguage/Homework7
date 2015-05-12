#include<stdio.h>
int maxcd(int x,int y);
int mincm(int x,int y);
int maxcd(int x,int y)
{
	int r,a,b;
    if(x>y)
	{
        a=x;
		b=y;
	}
	else
	{
		a=y;
		b=x;
	}
	for(r=1;r!=0;)
	{
		r=a%b;
        a=b;
		b=r;
	}
	return a;
}
int mincm(int x,int y)
{
	int a,b;
	a=maxcd(x,y);
	b=(x/a)*(y/a)*a;
    return b;
}
int main()
{
	int x,y;
	printf("请输入两个整数:\n");
	scanf("%d%d",&x,&y);
    printf("最大公约数为:%d\n最小公倍数为:%d\n",maxcd(x,y),mincm(x,y));
	return 0;
}
