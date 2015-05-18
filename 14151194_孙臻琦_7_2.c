#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,del;
	void f1(float a,float b,float del);
	void f2(float a,float b,float del);
	void f3();
	printf("请输入a,b,c(ax^2+bx+c=0):");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("方程为%fx^2+%fx+%f=0\n",a,b,c);
	del=b*b-4*a*c;
	if (del>0)
	{
		f1(a,b,del);
	}
	else if (del==0)
	{
		f2(a,b,del);
	}
	else 
	{
		f3();
	}
	return 0;
}
void f1(float a,float b,float del)
{
	float x1,x2;
	x1=(-b+sqrt(del))/(2*a);
	x2=(-b-sqrt(del))/(2*a);
	printf("两个根分别为%f,%f\n",x1,x2);
}
void f2(float a,float b,float del)
{
	float x;
	x=(-b+sqrt(del))/(2*a);
	printf("有且只有一个根为%f\n",x);
}
void f3()
{
	printf("没有实根\n");
}
