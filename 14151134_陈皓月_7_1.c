#include<stdio.h>
int hcf(int m,int n);
int lcd(int m,int n);
int main()
{
	int m,n;
	printf("请输入两个整数\n");
	scanf("%d",&n);
	scanf("%d",&m);
	printf("最大公约数为%d\n",hcf(m,n));  //调用函数
	printf("最小公倍数为%d\n",lcd(m,n));   //调用函数
	return 0;
}
int hcf(int m,int n)   //定义函数，求最大公约数
{
	int temp,r;
	if(n<m)
	{
		temp=n;
		n=m;
		m=temp;
	}
	while(m!=0)
	{
		r=n%m;
		n=m;
		m=r;
	}
	return n;
}
int lcd(int m,int n)  //定义函数，求最小公倍数
{
	int p,k;
	p=m*n;
	k=p/hcf(m,n);
	return k;
}
