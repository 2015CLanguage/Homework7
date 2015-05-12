
#include<stdio.h>
float p(int n,float x)
{
	float k;
	if(n==0)k=1.0;
	if(n==1)k=x;
	if(n>1)k=((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x))/n;
	return k;
}
void main()
{
	int n=0;
	float x=0.0;
	scanf("%d",&n);
	scanf("%f",&x);
	printf("%f",p(n,x));
}
