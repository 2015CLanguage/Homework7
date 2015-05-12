#include<stdio.h>
#include<math.h>
int main()
{
void fun1(float a,float b,float t);
void fun2(float a,float b);
void fun3();
float a,b,c,t;
printf("请输入a,b,c：");
scanf("%f,%f,%f",&a,&b,&c);
t=b*b-4*a*c;
if(t>0)
	fun1(a,b,t);
if(t==0)
	fun2(a,b);
if(t<0)
	fun3();
return 0;
}
void fun1(float a,float b,float t)
{
double x1,x2;
x1=(-b+sqrt(t))/(2*a);
x2=(-b-sqrt(t))/(2*a);
printf("x1=%f,x2=%f\n",x1,x2);
}
void fun2(float a,float b)
{
double x;
x=(-b)/(2*a);
printf("x=%f\n",x);
}
void fun3()
{
printf("无实根\n");
}
