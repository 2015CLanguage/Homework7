#include"stdio.h"
#include"math.h"
void f1(float,float);
void f2(float,float);
void f3(float,float);
float x1,x2,disc,p,q;
void main()
{
	float a,b,c;
	printf("请输入a,b,c\n");
	scanf("%f,%f,%f",&a,&b,&c);
	disc=b*b-4*a*c;
	printf("根为:\n");
	if(disc>0)
	{
		f1(a,b);
		printf("x1=%f\t\tx2=%f\n",x1,x2);
	}
	else if(disc==0)
	{
		f2(a,b);
		printf("x1=%f\t\tx2=%f\n",x1,x2);
	}
	else
	{
		f3(a,b);
		printf("x1=%f+%fi\tx2=%f-%fi\n",p,q,p,q);
	}


}
void f1(float a,float b)
{
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);
}

void f2(float a,float b)
{
	x1=x2=(-b)/(2*a);
}

void f3(float a,float b)
{
	p=-b/(2*a);
	q=sqrt(-disc)/(2*a);
}
