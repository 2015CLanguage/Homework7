#include<stdio.h>
#include<math.h>
void da(float,float);
void deng(float,float);
void xiao(float,float);
float x1,x2,d,p,q;
int main()
{
	float a,b,c;
	printf("请输入方程的系数a,b,c:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
		{da(a,b);
		 printf("x1=%f\tx2=%f\n",x1,x2);}
	else if(d==0)
		{deng(a,b);
		 printf("x1=x2=%f\n",x1);
		}
	else
		{xiao(a,b);
		 printf("x1=%f+%fi\tx2=%f-%fi\n",p,q,p,q);
		}
	return 0;
}
void da(float a,float b)
{	x1=(-b+sqrt(d))/(2*a);
	x2=(-b-sqrt(d))/(2*a);
}
void deng(float a,float b)
{	x1=-b/(2*a);
}
void xiao(float a,float b)
{	d=-d;
	p=-b/(2*a);
	q=sqrt(d)/(2*a);
}
