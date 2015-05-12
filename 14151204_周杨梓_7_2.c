#include<stdio.h>
#include<math.h>
double f1(double a, double b, double c,double d);
double f2(double a, double b, double c,double d);
double f3(double a, double b, double c,double d);
int main()
{
	double a,b,c,d;
	printf("请输入ax^2+bx+c=0中的系数a,b,c:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		f1(a,b,c,d);
	}
	if(d==0)
	{
		f2(a,b,c,d);
	}
	if(d<0)
	{
		f3(a,b,c,d);
	}
	return 0;
}
double f1(double a, double b, double c,double d)
{
	double x1,x2;
    x1=(-b+pow(d,0.5))/(2*a);
	x2=(-b-pow(d,0.5))/(2*a);
	printf("方程有两实根,分别为%f,%f\n",x1,x2);
	return 0;
}
double f2(double a, double b, double c,double d)
{
	double x;
	x=-b/(2*a);
	printf("方程有一实根,为%f\n",x);
	return 0;
}
double f3(double a, double b, double c,double d)
{
	double x,y;
	x=-b/(2*a);
	y=pow(-d,0.5)/(2*a);
	printf("方程无实根,两个虚根分别为%f+%fi和%f-%fi\n",x,y,x,y);
	return 0;
}
