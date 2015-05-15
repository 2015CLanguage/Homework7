#include<stdio.h>
#include<math.h>
double delta,x1,x2,p,q;
int main()
{
	double greater(double a , double b);
	double equal(double a , double b);
	double smaller(double a , double b);
	double a,b,c; 
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if(delta>0)
	{ 
		greater(a , b);
		printf("x1=%lf\nx2=%lf",x1,x2);
	}
	else if(delta==0)
	{
		equal(a , b);
		printf("x1=%lf\nx2=%lf",x1,x2);
	}
	else
	{
		smaller(a , b);
		printf("x1=%lf+%lfi\nx2=%lf-%lfi",p,q,p,q);
	}
	return 0;
}

double greater(double a , double b)
{
	x1=(-b+sqrt(delta))/(2*a);
	x2=(-b-sqrt(delta))/(2*a);
}

double equal(double a , double b)
{
	x1=x2=-b/(2*a);
}

double smaller(double a , double b)
{
	p=-b/(2*a);
	q=sqrt(-delta)/(2*a);
}
