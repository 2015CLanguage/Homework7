#include <stdio.h>
int max(int(x),int(y))
{
	int t;
	while(x!=y)
	{
		if(x<y)
			y=y-x;
		if(x>y)
			x=x-y;
	}
	if(x==y) t=x;
	return(t);
}
int min(int(x),int(y))
{
	int p,q;
	p=max(x,y);
	q=x*y/p;
	return(q);
}
void main()
{
	int m,n,p,q;
	printf("请输入两个正整数m,n\n");
	scanf("%d,%d",&m,&n);
	p=max(m,n);
	q=min(m,n);
	printf("%d,%d的最大公约数为%d\n",m,n,p);
	printf("%d,%d的最小公倍数为%d\n",m,n,q);
}
