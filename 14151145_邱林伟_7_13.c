#include<stdio.h> 
void main() 
{
	float p(int n,float x);
	int n;
	float x;
  printf("请输入n和x:");
	scanf("%d,%f",&n,&x);
	printf("P%d(%f)=%f\n",n,x,p(n,x));
}

float p(int n,float x)
{
	if(n==0)
		return 1;
	if(n==1)
		return x;
	else
		return ((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x))/n;
}
