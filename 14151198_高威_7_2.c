#include <stdio.h>
#include <math.h>

double a,b,c;
double delta;

void SolveNegative()
{
	delta=-delta;
	double x=-b/(2*a);
	double y=sqrt(delta)/(2*a);
	y=fabs(y);
	printf("x1=%.2f+%.2fi\n",x,y);
	printf("x2=%.2f-%.2fi\n",x,y);
}
void SolvePositive()
{
	double x=-b/(2*a);
	double y=sqrt(delta)/(2*a);
	y=fabs(y);
	printf("x1=%.2f+%.2f\n",x,y);
	printf("x2=%.2f-%.2f\n",x,y);
}
void SolveZero()
{
	double x=-b/(2*a);
	printf("%.2f\n",x);
}

int main()
{
	scanf("%lf %lf %lf",&a,&b,&c);
	delta=b*b-4*a*c;
	if (delta>0)  SolvePositive();
	if (delta<0)  SolveNegative();
	if (delta==0)  SolveZero();
	return 0;
}
