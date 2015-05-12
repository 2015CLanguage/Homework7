#include "stdio.h"
#include "math.h"
void main()
{
	void fun1(float i,float j,float k);
	void fun2(float i,float j);
	void fun3();
	float a,b,c;
	printf("请输入a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	if(b*b-4*a*c>0)
		fun1(a,b,c);
	else if(b*b-4*a*c==0)
		fun2(a,b);
	else fun3();
}
void fun1(float i,float j,float k)
{
	double x1,x2;
	x1=(-j+sqrt(j*j-4*i*k))/(2*i);
	x2=(-j-sqrt(j*j-4*i*k))/(2*i);
	printf("有两解，为%5.2lf,%5.2lf\n",x1,x2);
}
void fun2(float i,float j)
{
	float x;
	x=-j/i/2;
	printf("有一解，为%5.2f\n",x);
}
void fun3()
{
	printf("无解\n");
}
