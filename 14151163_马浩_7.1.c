#include <stdio.h>
int main()
{
	int u(int,int);
	int v(int,int,int);
	int a,b,f,g;
	scanf("%d,%d",&a,&b);
	f=u(a,b);
	printf("最大公约数=%d\n",f);
	g=v(a,b,f);
	printf("最小公倍数=%d\n",g);
	return 0;
}
int u(int a,int b)
{
	int m,n;
	if(a>b)
	{
		m=a;
		a=b;
		b=m;
	}
	while((n=a%b)!=0)
	{
		a=b;
		b=n;
	}
	return(b);
}
int v(int a,int b,int f)
{
	return(a*b/f);
}
