#include<stdio.h>
int main()
{
	int a(int,int);
	int b(int,int,int);
	int m,n,p,q;
	printf("请输入两个数：");
	scanf("%d,%d",&m,&n);
	p=a(m,n);
	printf("最大公约数为：%d,",p);
	q=b(m,n,p);
	printf("最小公倍数为：%d\n",q);
	return 0;
}
int a(int m,int n)
{
	int;
	while(m!=n)
	{
		if(m>n)
			m=m-n;
		else
			n=n-m;
	}
	return(m);
}
int b(int m,int n,int p)
{
	return(m*n/p);
}
