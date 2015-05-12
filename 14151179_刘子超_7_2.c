#include<stdio.h>
double www(double a,double b,double d);
double nnn(double a,double b);
void mmm();
void main()
{
	double a,b,c,wnm;
	scanf("%lf,%lf,%lf",&a,&b,&c);
	wnm=(b*b)-(4*a*c);
	printf("%lf*x*x+%lf*x+%lf=0\n",a,b,c);
	if(a==0)printf("wrong");
	else if(wnm>0)www(a,b,wnm);
	else if(wnm==0)nnn(a,b);
	else mmm();
}
double www(double a,double b,double d)
{
	double x1,x2;
	x1=(d-b)/(2*a);
    x2=(-d-b)/(2*a);
	printf("x1 is %lf\n",x1);
	printf("x2 is %lf\n",x2);
    return 0;
}
double nnn(double a,double b)
{   
	double x;
    x=(-b)/(2*a);
	printf("x is %lf\n",x);
	return 0;
}
void mmm()
{
	printf("no shishu gen");
}
