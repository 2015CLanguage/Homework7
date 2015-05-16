#include<stdio.h>
#include<math.h>
float two(float a,float b,float c);
float one(float a,float b,float c);
int main()
{
	float a,b,c,n;
	printf("请输入三个数字a，b，c\n");
	scanf("%f%f%f",&a,&b,&c);
	n=b*b-4*a*c;
	if(n>0)
		two(a,b,c);  
	else if(n==0)
		one(a,b,c);  
	else
		printf("方程无实根");
		return 0;
}
float two(float a,float b,float c)  
{
	float x,y;
	x=(-1*b+sqrt(b*b-4*a*c))/(2*a);
	y=(-1*b-sqrt(b*b-4*a*c))/(2*a);
	printf("方程的根为x1=%.3f,x2=%.3f\n",x,y);
	return x,y;
}
float one(float a,float b,float c)  
{
	float x;
	x=(-1*b)/(2*a);
	printf("方程的根为x=%.3f",x);
	return x;
}
