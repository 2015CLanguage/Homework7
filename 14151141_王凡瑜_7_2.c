#include<stdio.h>
#include<math.h>

void real_root(double a,double b,double c);
void multiple_root(double a,double b,double c);
void complex_root(double a,double b,double c);

void main()
{
	double a,b,c;
	printf("Please input 3 integers.\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	if((b*b-4*a*c)>0)
		real_root(a,b,c);
	if((b*b-4*a*c)==0)
		multiple_root(a,b,c);
	if((b*b-4*a*c)<0)
		complex_root(a,b,c);
}

void real_root(double a,double b,double c)
{
	printf("The root X1 is %.6lf\n",((-b+pow((b*b-4*a*c),0.5))/(2*a)));
	printf("The root X1 is %.6lf\n",((-b-pow((b*b-4*a*c),0.5))/(2*a)));
}

void multiple_root(double a,double b,double c)
{
	printf("The equation has two multiple roots, that is %.6lf\n",((-b)/(2*a)));
}

void complex_root(double a,double b,double c)
{
	double r,c1,c2;
	r=(-b)/(2*a);
	c1=pow(-(b*b-4*a*c),0.5)/(2*a);
	c2=-(pow(-(b*b-4*a*c),0.5))/(2*a);
	printf("The complex root X1 is %.6f+%.6fi\n",r,c1);
	printf("The complex root X2 is %.6f+%.6fi\n",r,c2);
}
