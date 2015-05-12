#include<stdio.h>
#include<math.h>
void great(float a,float b);
void equal(float a,float b);
void small(float a,float b);
float disc,x1,x2,c1,c2;
void main()
{
	float a,b,c;
	printf("请输入a,b,c的值\n");
	scanf("%f%f%f",&a,&b,&c);
	printf("方程为：(%4.2f)*x*x+(%4.2f*x)+(%4.2f)=0\n",a,b,c);
	disc=b*b-4*a*c;
	printf("根为：\n");
	if(disc>0)
	{
		great(a,b);
		printf("x1=%f\nx2=%f\n",x1,x2);
	}
	else if(disc==0)
        {
		equal(a,b);
		printf("x1=x2=%f\n",x1);
	}
	else
	{
		small(a,b);
		printf("x1=%f+%fi\nx2=%f-%fi\n",c1,c2,c1,c2);
	}
}
void great(float a,float b)
{
	x1=(-b+sqrt(disc))/(2*a);
	x2=(-b-sqrt(disc))/(2*a);
}
void equal(float a,float b)
{
	x1=x2=(-b)/(2*a);
}
void small(float a,float b)
{
	c1=(-b)/(2*a);
	c2=sqrt(-disc)/(2*a);
}
