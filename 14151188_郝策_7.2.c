#include"stdio.h"
#include"math.h"
void plus(float a,float b,float c);
void zero(float a,float b,float c);
void minus(float a,float b,float c);

int main()
{
	float a,b,c;
	float delta;
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	
	delta=b*b-4*a*c;
	printf("a=%f,b=%f,c=%f\n",a,b,c);
	printf("delta=%f\n",delta); 
	
	if (delta>0)
		plus(a,b,c);
	if(delta==0)
		zero(a,b,c);
	if(delta<0)
		minus(a,b,c);
}

void plus(float a,float b,float c)
{
	float x1,x2;
	printf("方程有两个实根\n");
	x1=(-b+sqrt(b*b-4*a*c))/(2*a);
	x2=(-b-sqrt(b*b-4*a*c))/(2*a);
	printf("x1=%f\n",x1);
	printf("x2=%f\n",x2);
}

void zero(float a,float b,float c)
{
	float x;
	printf("有一个实根\n");
	printf("a=%f,b=%f,c=%f\n",a,b,c);
	x=-b/(2*a) ;
	printf("x=%f",x);
}

void minus(float a,float b,float c)
{
	printf("没有实根");
}
