#include <stdio.h>
float a(int n,int x)
{
	int m;
	if(n==0)
	{
		return(1);
	}
	else if(n==1)
	{
		return(x);
	}
	else
	{
	m=((2*n-1)*x-a((n-1),x)-(n-1)*a((n-2),x))/n;
	return(m);
	}
}

int main()
{
	int n,x;
	float a(int n,int x);
	printf("输入n和x:");
	scanf("%d,%d",&n,&x);
	printf("结果是:%7.2f",a(n,x));
	return 0;
}
