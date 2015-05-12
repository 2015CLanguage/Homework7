#include<stdio.h>
double qiu(double x,int n);
void main()
{
	double x,p;
	int n;
	scanf("%lf,%d",&x,&n);
    p=qiu(x,n);
	printf("%lf",p);
}
double qiu(double x,int n)
{
    double y;
	if(n==0)y=1;
	else if(n==1)y=x;
	else y=(((2*n-1)*x)-qiu(x,n-1)-((n-1)*qiu(x,n-2)))/n;
	return y;
}
