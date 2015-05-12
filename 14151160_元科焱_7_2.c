#include <stdio.h>
#include <math.h>
float m,n,k,x1,x2;
int main ()
{
	void more_than_zero(float,float);
	void equal_zero(float,float);
	void less_than_zero(float,float);
	float a,b,c;
	printf("input a,b,c\n");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("%.3f*x*x+%.3f*x+%.3f=0\n",a,b,c);
	m=b*b-4*a*c;
	if (m>0)
	{
		more_than_zero(a,b);
		printf("x1=%f,x2=%f\n",x1,2);
	}
	else if (m=0)
	{
		equal_zero(a,b);
		printf("x1=%f,x2=%f\n",x1,x2);
	}
	else 
	{
		less_than_zero(a,b);
		printf("x1=%f+%fi,x2=%f-%fi\n",n,k,n,k);
	}
	return 0;
}

void more_than_zero(float a,float b)
{
	x1=(-b+sqrt(m))/(2*a);
	x2=(-b-sqrt(m))/(2*a);
}
void equal_zero(float a,float b)
{
	x1=x2=(-b)/(2*a);
}
void less_than_zero(float a,float b)
{
	n=(-b)/(2*a);
	k=(sqrt(-m))/(2*a);
}
