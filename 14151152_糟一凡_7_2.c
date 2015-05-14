#include<stdio.h>
#include<math.h>
float p,q;
void positive()
{
	printf("方程存在两个不等的实根：%f和%f",p+q,p-q);
}
void zero()
{
	printf("方程存在两个相等的实根：%f",p);
}
void negative()
{
	printf("方程存在两个虚数根：%f+%fi和%f-%fi",p,q,p,q);
}
int main()
{
	float a,b,c,t;
	printf("请输入方程的系数a,b,c(a不为0）：");
	scanf("%f,%f,%f",&a,&b,&c);
	t=pow(b,2)-4*a*c;
	p=-(b/(2*a));
	if(t>0)
	{
		q=sqrt(t)/(2*a);
		positive();
	}
	else if(t==0)
	{
		zero();
	}
	else if(t<0)
	{
		q=sqrt(-t)/(2*a);
		negative();
	}
	printf("\n");
	return 0;
}
