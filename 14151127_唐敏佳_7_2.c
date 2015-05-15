#include "stdio.h"
#include "math.h"

void da(double x,double y,double n);
void deng(double x,double y);
void xiao();
double main()
{
	double a,b,c,t;
	printf("ax^2+bx+c=0\n");
	printf("a=");
	scanf("%d",&a);
	printf("b=");
	scanf("%d",&b);
	printf("c=");
	scanf("%d",&c);
	t=(b*b)-(4*a*c);
	printf("%d\n",t);
	if(t>0)
	{
		da(a,b,t);
	}
	else if(t==0)
	{
		deng(a,b);
	}
	else
	{
		xiao();
	}
	return 0;
}

void da(double x,double y,double n)
{
	double x1,x2;
	x1=(-y+sqrt(n))/(2*x);
	x2=(-y-sqrt(n))/(2*x);
	printf("x1=%d \n x2=%d \n",x1,x2);
}
void deng(double x,double y)
{
	double x1;
	printf("(-%d)/(2*%d)\n",y,x);
	x1=(-y)/(2*x);
	printf("x1=x2=%d \n",x1);
}
void xiao()
{
	printf("此方程无实数解\n");
}
