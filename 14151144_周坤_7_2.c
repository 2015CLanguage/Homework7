# Homework7
#include<stdio.h>
#include<math.h>
void p1(float a,float b);
void p2(float a,float b);
void p3(float a,float b);
float x1,x2,t,r,s;
int main()
{
	float a,b,c;
	printf("请输入二次方程的三个系数:");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("方程为:%5.2f*x*x+%5.2f*x+%5.2f=0\n",a,b,c);
	t=b*b-4*a*c;
	printf("方程的根为:\n");
	if(t>0)
	{
		p1(a,b);
		printf("x1=%f\nx2=%f\n",x1,x2);
	}
	else if(t=0)
	{
		p2(a,b);
		printf("x1=x2=%f\n",x1);
	}
	else
	{
		p3(a,b);
		printf("x1=%f+%fi\nx2=%f-%fi\n",r,s,r,s);
	}
	return 0;
}

void p1(float a,float b)
{
	x1=(-b+sqrt(t))/(2*a);
	x1=(-b-sqrt(t))/(2*a);
}
void p2(float a,float b)
{
	x1=x2=(-b)/(2*a);
}
void p3(float a,float b)
{
	r=(-b)/(2*a);
	s=sqrt(-t)/(2*a);
}
