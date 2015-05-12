#include<stdio.h>
float p(float x, int n)
{
	float z;
	if(n==0)
		z=1;
	else if(n==1)
		z=x;
	else
		z=((2*n-1)*x-p(x,n-1)-(n-1)*p(x,n-2))/n;
	return z;
}void main()
{
	int n;
	float x;
	printf("Please input x and n:");
	scanf("%f,%d",&x,&n);
	printf("%d阶勒让多项式的值为：%f\n",n,p(x,n));
}
