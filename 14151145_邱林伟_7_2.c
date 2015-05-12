#include<stdio.h>
#include<math.h>
void main()
{
	void f1(float a,float b,float c);
    void f2(float a,float b,float c);
    void f3(float a,float b,float c);
    float delt,a,b,c;
	printf("请输入二次方程的各项系数(a不为0):");
	scanf("%f,%f,%f",&a,&b,&c);
	delt=b*b-4*a*c;
	printf("方程%fx*2+%fx+%f=0的根为：\n",a,b,c);
    if(delt>0)
	f1(a,b,c);
	if(delt==0)
	f2(a,b,c);
	if(delt<0)
	f3(a,b,c);
}

void f1(float a,float b,float c)
{
	float x,y,delt2;
    delt2=b*b-4*a*c;
	x=(sqrt(delt2)-b)/(2*a);
	y=(-b-sqrt(delt2))/(2*a);
	printf("x1=%f\n",x);
	printf("x2=%f\n",y);
}

void f2(float a,float b,float c)
{
    float x;
	x=-b/(2*a);
	printf("x1=x2=%f\n",x);
}

void f3(float a,float b,float c)
{
	float x,y,delt2;
	delt2=4*a*c-b*b;
	x=sqrt(delt2)/(2*a);
	y=-b/(2*a);
    printf("x1=%f+%fi\n",y,x);
	printf("x2=%f-%fi\n",y,x);
}
