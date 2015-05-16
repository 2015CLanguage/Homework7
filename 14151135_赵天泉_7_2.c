#include<stdio.h>
#include<math.h>
float disc,x1,x2;
void f1(float x,float y);
void f2(float x,float y);
void f3(float x,float y);
int main()
{	
	float a,b,c,disc,x1,x2;
	printf("请输入三个数a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("方程为：%.2f*x*x+%.2f*x+%.2f=0\n",a,b,c);
	printf("方程的解为:");
	disc=b*b-4*a*c;
	if(disc>0)
	{
		f1(a,b);
		printf("x1=%f\t\tx2=%f",x1,x2);
	}
	else if(disc==0)
	{
		f2(a,b);
		printf("x1=%f,x2=%f",x1,x2);
	}
	else
	{
		f3(a,b);
		printf("x1=%f+%fi,x2=%f-%fi",x1,x2,x1,x2);
	}
	printf("\n");
	return 0;
}
void f1(float x,float y)
{
	x1=(-y+sqrt(disc))/(2*x);
	x2=(-y-sqrt(disc))/(2*x);
}
void f2(float x,float y)
{
	x1=x2=(-y)/(2*x);
}
void f3(float x,float y)
{
	x1=-y/(2*x);
	x2=sqrt(-disc)/(2*x);
}
