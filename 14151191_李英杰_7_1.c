#include<stdio.h>
int factor(int x,int y);
int multi(int x,int y);
void main()
{
    int m,n,s1,s2;
    printf("请输入两个整数:\n");
    scanf("%d%d",&m,&n);
    s1=factor(m,n);
    s2=multi(m,n);
    printf("最大公约数为%d\n最小公倍数为%d\n",s1,s2);
}
int factor(int x,int y)
{
	int m,t;
	if(x<y)
	{
		t=x;
		x=y;
		y=t;
	}
	m=x%y;
	while(m!=0)
	{
		m=x%y;
		x=y;
		y=m;
	}
	return x;
}
int multi(int x,int y)
{
	int f,multiple;
	f=factor(x,y);
	multiple=x*y/f;
	return multiple;
}
