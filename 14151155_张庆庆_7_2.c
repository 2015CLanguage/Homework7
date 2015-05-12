#include<stdio.h>
#include<math.h>
float x1,x2,d,p,q;
void  m(float a,float b)
{
   x1=(float)((-b)+sqrt(d))/(2*a);
   x2=(float)((-b)-sqrt(d))/(2*a);                                                                                                                                                                                                                                                                                     ;
}
void  n(float a,float b)
{
	x1=x2=(float)(-b)/(2*a);
}
void  f(float a,float b)
{
   p=-b/(2*a);
   q=(float)sqrt(-d)/(2*a);
}
int main()
{
  float a,b,c;
	printf("请输入a,b,c的值：");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		  m(a,b);
		printf("该一元二次方程的解为：x1=%.2f,x2=%.2f\n",x1,x2);
	}
	else if(d==0)
	{
		  n(a,b);
	    printf("该一元二次方程的解为：x1=x2=%.2f\n",x1);
	}
	else
	{
		 f(a,b);
	    printf("该一元二次方程的解为：x1=%.2f+%.2fi,x2=%.2f-%.2fi\n",p,q,p,q);
	}

	return 0;
}
