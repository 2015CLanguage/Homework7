#include "stdio.h"
int max(int x,int y)
{
	int z,i;
	if(x>y)
	{
		z=y;
		y=x;
		x=z;
	}
	for(i=x;i>0;i--)
		if(x%i==0 && y%i==0)
			break;
	return i;	
}
int min(int x, int y)
{
	int k;
	int j=max(x,y);
	k=x*y/j;
	return k;
}
void main()
{
	int a,b,m,n;
	scanf("%d%d",&a,&b);
	m=max(a,b);
	n=min(a,b);
	printf("最大公约数为%d\n最小公倍数为%d\n",m,n);
}
