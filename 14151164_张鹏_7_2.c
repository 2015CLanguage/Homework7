#include<stdio.h>
#include<math.h>
float x1,x2,d,s,t;
void  u(float a,float b,float d)
{
   x1=((-b)+sqrt(d))/(2*a);
   x2=((-b)-sqrt(d))/(2*a);                                                                                                                                                                                                                                                                                     ;
}
void  v(float a,float b,float d)
{
	x1=x2=(-b)/(2*a);
}
void  w(float a,float b,float d)
{
   s=-b/(2*a);
   t=sqrt(-d)/(2*a);
}

int main()
{

    float a,b,c;
	printf("输入a,b,c：");
	scanf("%f%f%f",&a,&b,&c);
	d=b*b-4*a*c;
	if(d>0)
	{
		  u(a,b,d);
		printf("该一元二次方程的解为：x1=%.2f,x2=%.2f\n",x1,x2);
	}
	else if(d==0)
	{
		  v(a,b,d);
	    printf("该一元二次方程的解为：x1=x2=%.2f\n",x1);
	}
	else
	{
		 w(a,b,d);
	    printf("该一元二次方程的解为：x1=%.2f+%.2fi,x2=%.2f-%.2fi\n",s,t,s,t);
	}

	return 0;
}
