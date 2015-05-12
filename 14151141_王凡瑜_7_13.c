#include<stdio.h>

double cal(double x,int n);

void main()
{
	double x,res;
	int n;
	printf("Please input the variable x and the order n with a comma as the seperator\n");
	scanf("%lf,%d",&x,&n);
	res=cal(x,n);
	printf("The value of Legendre Polynomia of %d order is\n%.6lf\n",n,res);
}

double cal(double x,int n)
{
	if(n==0)
		return 1;d
	if(n==1)
		return x;
	if(n>1)
		return ((2*n-1)*x-cal(x,n-1)-(n-1)*cal(x,n-2))/n;
}
