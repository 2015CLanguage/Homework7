#include <stdio.h>
#include <math.h>
int main()
{
	float a,b,c,del;
	void func1(float a,float b,float del);
	void func2(float a,float b,float del);
	void func3();
	printf("请输入a,b,c:");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("方程为%fx^2+%fx+%f=0\n",a,b,c);
	del=b*b-4*a*c;
	if (del>0)
	{func1(a,b,del);}
	else if (del==0)
	{func2(a,b,del);}
	else 
	{func3();}
	return 0;
}


void func1(float a,float b,float del)
{
	float re1,re2;
	re1=(-b+sqrt(del))/(2*a);
	re2=(-b-sqrt(del))/(2*a);
	printf("两个根分别为%f,%f\n",re1,re2);
}

void func2(float a,float b,float del)
{
	float re;
	re=(-b+sqrt(del))/(2*a);
	printf("有一个根为%f\n",re);
}

void func3()
{
	printf("没有实根\n");
}
