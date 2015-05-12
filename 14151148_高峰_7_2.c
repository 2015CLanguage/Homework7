#include<stdio.h>
#include<math.h>
void F1(double l,double m,double n);
void F2(double l,double m,double n);
void F3();
int main()
{
	double a,b,c,q;
	printf("ax^2+bx+c=0\n");
	printf("请分别输入a,b,c的值\n");
	printf("a=");
	scanf("%f",&a);
	printf("b=");
	scanf("%f",&b);
	printf("c=");
	scanf("%f",&c);
	q=b*b-4*a*c;
	if(q>0)
		F1(a,b,c);
	else if(q==0)
		F2(a,b,c);
	else
		F3();
	return 0;
}
void F1(double l,double m,double n)
{
	double x;
	x=(-m+sqrt(m*m-4*l*n))/(2*l);
	printf("方程的一个解为:%f\n",x);
	x=(-m-sqrt(m*m-4*l*n))/(2*l);
	printf("方程的另一个解为:%f\n",x);
}
void F2(double l,double m,double n)
{
	double x;
	x=(-m+sqrt(m*m-4*l*n))/(2*l);
	printf("方程有唯一解为:%f\n",x);
}
void F3()
{
	printf("方程没有实数解!\n");
}
