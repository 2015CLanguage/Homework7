#include<stdio.h>
int divisor(int x, int y)//求最大公约数
{
	int temp,z;
	if(x<y)
	{
		temp=y;
		y=x;
		x=temp;
	}
	while(1)
	{
		z=x-y;
		if(z>y)
			x=z;
		else if(z<y)
		{x=y;y=z;}
		else
			break;
	}
	return z;
}
int multiple(int x, int y)//求最小公倍数
{
	int z;
	z=x*y/divisor(x,y);
	return z;
}
void main()
{
	int m,n;
	printf("Please enter m,n :");
	scanf("%d,%d",&m,&n);
	printf("%d和%d的最大公约数为%d，最小公倍数为%d\n",m,n,divisor(m,n),multiple(m,n));
}
