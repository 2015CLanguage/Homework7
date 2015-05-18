#include<stdio.h>
int main()
{
	float f(int n,int x);
	int n,x;
	float w;
	printf("请输入n和x\n:");
	scanf("%d,%d",&n,&x);
	w=f(n,x);
	printf("多项式结果为:\n%f\n",w);
	return 0;
}
float f(int n,int x)
{
	float a;
	if(n==0)
		return 1;
	if(n==1)
		return x;
	if(n>1)
	{
		a=(2*n-1)*x-f(n-1,x)-(n-1)*f(n-2,x)/n;
		return a;
	}
}
