#include<stdio.h>
int LCM(int m,int n )
{	
	int t,r;
	if(n<m)
	{
		t=n;
		n=m;
		m=t;
	}
	
	while(m!=0)
	{	
		r=n%m;
		n=m;
		m=r;
	}
	return n;
}
int GCD(int m,int n)
{	
	int p;
	p=n*m;
	return p;
}
int main()
{	
	int LCM(int m,int n);
	int GCD(int m,int n);
	int x,y,h,l;
	printf("请输入两个正整数x,y:");
	scanf("%d%d",&x,&y);
	h=LCM(x,y);
    l=GCD(x,y);
	printf("最大公约数是：%d\n",h);
	printf("最小公倍数是：%d\n",l);
	return 0;
}
