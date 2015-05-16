#include"stdio.h"
#include"math.h"
double a,b,c,d,x1,x2,m,n;
void main()
{
	void large(double a,double b);
	void equal(double a,double b);
		void small(double a,double b);
		
		scanf("%lf%lf%lf",&a,&b,&c);
		d=b*b-4.0*a*c;
		if(d>0)
		{
			large(a,b);
			printf("x1=%lf,x2=%lf\n",x1,x2);
		}
		else if(d==0)
		{
			equal(a,b);
			printf("x1=%lf,x2=%lf\n",x1,x2);
		}
		else
			{
			small(a,b);
			printf("x1=%lf+%lfi,x2=%lf-%lfi\n",m,n,m,n);
		}
}
void large(double a,double b)
{
	x1=(-b+sqrt(d))/(2.0*a);
	x2=(-b-sqrt(d))/(2.0*a);
}
void equal(double a,double b)
{
	x1=x2=(-b)/(2.0*a);
}
void small(double a,double b)
{
	m=(-b)/(2.0*a);
	n=sqrt(-d)/(2.0*a);
}

