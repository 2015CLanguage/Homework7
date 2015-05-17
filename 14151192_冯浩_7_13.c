#include<stdio.h>
float p(int n,int x);
int main()
{
	int x,n;
	float y;
	printf("请输入勒让德多项式的阶数n：\n");
	scanf("%d",&n);
	printf("请输入自变量x：\n");
	scanf("%d",&x);
	y=p(n,x);
	printf("P%d(%d)=%6.2f\n",n,x,y);
	return 0;
}
float p(int n,int x)
{	float r;
	if(n==0)
		r=1;
	else if(n==1)
		r=x;
	else
		r=(2*n-1)*x*p((n-1),x)-(n-1)*p((n-2),x)/n;
	return r;
}
