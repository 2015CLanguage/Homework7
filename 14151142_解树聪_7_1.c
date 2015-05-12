#include<stdio.h>
#include<math.h>
float x1,x2,d,p,q,a,b,c;
void tworoot(float a,float b);
void oneroot(float a,float b);
void imroot(float a,float b);
void tworoot(float a,float b)
{	
	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
}

void oneroot(float a,float b)
{
	x1=(-b+sqrt(d))/(2*a);
}

void imroot(float a,float b)
{
	p=-b/(2*a);
	q=sqrt(-d)/(2*a);
}

void main()
{
	printf("请输入三个系数a,b,c:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("方程为:%.2f*x*x+%.2f*x+%.2f=0\n",a,b,c);
	d=d=b*b-4*a*c;
	printf("方程的根为；\n");
	if(d>0)
	{
		tworoot(a,b);
		printf("x1=%f         x2=%f\n",x1,x2);
	}
	else
	{
		if(d==0)
		{
			oneroot(a,b);
			printf("x1=x2=%f\n",x1);
		}
		else
		{
			imroot(a,b);
			printf("x1=%f+%fi         x2=%f-%fi\n",p,q,p,q);
		}
	}
}

