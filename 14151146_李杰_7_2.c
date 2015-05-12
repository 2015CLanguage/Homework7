#include<stdio.h>
#include<math.h>
void bt0(double x, double y, double d)//判别式大于0
{
	double r1,r2,D;
	D=sqrt(d);
	r1=(-y+D)/(2*x);
	r2=(-y-D)/(2*x);
	printf("This equation has two roots:%8.4f and %8.4f\n",r1,r2);
}
void e0(double x, double y)//判别式等于0
{
	double r;
	r=-y/(x*2);
	printf("This equation has two same roots:%8.4f\n",r);
}
void st0(double x, double y, double d)//判别式小于0
{
	double real,image,D;
	real=-y/(x*2);
	image=sqrt(-d)/(2*x);
	printf("This equation has two complex roots:%8.4f+%8.4fi and %8.4f-%8.4fi\n",real,image,real,image);
}
void main()
{
	double a,b,c,d;
	printf("Please enter a,b,c:");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
		bt0(a,b,d);
	else if(d==0)
		e0(a,b);
	else
		st0(a,b,d);
}
