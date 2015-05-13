#include <stdio.h>
#include <math.h>
void main()
{
	double a,b,c,x1,x2,d,e;
	printf("请输入该二次方程对应的系数a,b,c\n");
	scanf("%lf,%lf,%lf",&a,&b,&c);
	if(a==0)printf("该方程不是一元二次方程，输入错误\n");
	else
	{
		d=b*b-4*a*c;
		e=-b/(2*a);
		if(d==0) 
		{
			x1=e;
			printf("该一元二次方程有且只有唯一一个实根：%.2f\n",x1);
		}
		if(d<0)
		{
			printf("该一元二次方程有两个虚根:");
			x1=sqrt(-d)/(2*a);
			x2=-sqrt(-d)/(2*a);
			printf("%.2f+(%.2f)i,%.2f+(%.2f)i\n",e,x1,e,x2);
		}
		if(d>0)
		{
			x1=e+sqrt(d)/(2*a);
			x2=e-sqrt(d)/(2*a);
			printf("该一元二次方程有两个不等实根：%.2f,%.2f",x1,x2);
		}
	}
}
