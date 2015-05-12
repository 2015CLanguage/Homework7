#include <stdio.h>
int main ()
{
	int p(int,int);
	int q(int,int,int);
	int a,b,c,d;
	scanf("%d,%d",&a,&b);
	c=p(a,b);
	d=q(a,b,c);
	printf("最大公约数%d\n",c);
	printf("最小公倍数%d\n",d);
	return 0;
}

int p(int a,int b)
{
	int e,m,i,c;
	if (a<b)
	{
		e=a;
		a=b;
		b=e;
	}
	m=b;
	for(i=0;i<b;i++)
	{
		m=b-i;
		if(a%m==0) break;
	}
	c=m;
	return (c);
}

	int q(int a,int b,int c)
	{
		return (a*b/c);	
	}
	
