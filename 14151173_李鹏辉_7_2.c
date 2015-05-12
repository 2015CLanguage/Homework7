#include<stdio.h>
#include<math.h>
void case1(double x,double y,double z)
{
    double a,b;
	a=((-1)*y+sqrt(z))/(2*x);
	b=((-1)*y-sqrt(z))/(2*x);
	printf("x1=%.3f,x2=%.3f\n",a,b);
}
void case2(double x,double y)
{
	double a;
	a=(-1)*y/(2*x);
	printf("x1=x2=%lf\n",a);
}
void case3()
{
	puts("no answer");
}
void main()
{
	double a,b,c,m;
	puts("please input a:");
	scanf("%lf",&a);
	puts("please input b:");
	scanf("%lf",&b);
	puts("please input c:");
	scanf("%lf",&c);
	m=b*b-4*a*c;
	if(m>0) case1(a,b,m);
	else if(m==0) case2(a,b);
	else case3();
}
