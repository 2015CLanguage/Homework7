#include <stdio.h>
#include <math.h>
int gongyue(int x,int y)
{
	int p,i;
	if(x>y)
		p=y;
	else
		p=x;
	for(i=p;i>0;i--)
		if((x%i==0)&&(y%i==0))
			break;
	return i;
}
int gongbei(int x,int y)
{
	int k;
	k=(x*y)/gongyue(x,y);
	return k;
}
void main()
{
	int m,n,a,b;
	printf("请输入两个整数:\n");
	scanf("%d,%d",&m,&n);
	a=gongyue(m,n);
	b=gongbei(m,n);
	printf("两数的最大公约数为%d\n",a);
	printf("两数的最小公倍数为%d\n",b);
}
