#include<stdio.h>
#include<math.h>
void f1(int a,int b,int c)
{
	float x,y;
	x=(-b+sqrt(b*b-4*a*c))/(2*a);
	y=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("此方程根为%f,%f",x,y);
}
void f2(int a,int b,int c)
{
	float x;
	x=(-b)/(2.0*a);
	printf("此方程根为%d",x);
}
void f3(int a,int b,int c)
{
	printf("此方程无根");
} 

void main()
{
	int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
	if(b*b-4*a*c>0)f1(a,b,c);
	if(b*b-4*a*c==0)f2(a,b,c);
	if(b*b-4*a*c<0)f3(a,b,c);
}
