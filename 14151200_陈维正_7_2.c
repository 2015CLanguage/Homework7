#include <stdio.h>
#include <math.h>
int main()
{
float f(double x,double y,double z);
float g(double x,double y,double z);
double a,b,c;
printf("请输入三个数\n");
scanf("%lf%lf%lf",&a,&b,&c);
if((b*b-4*a*c)>0)
	f(a,b,c);
if((b*b-4*a*c)==0)
	g(a,b,c);
if((b*b-4*a*c)<0)
	printf("方程无解");
return 0;
}

float f(double x,double y,double z)
{
double p,r1,r2;
p=y*y-4*x*z;
r1=(-y+sqrt(p))/(2*x);
r2=(-y-sqrt(p))/(2*x);
printf("%lf,%lf",r1,r2);

}

float g(double x,double y,double z)
{
double r;
r=-y/2*x;
printf("%lf",r);
}
