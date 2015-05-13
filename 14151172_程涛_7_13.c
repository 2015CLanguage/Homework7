#include<stdio.h>
double f(int n,double x)
{
	double y;
	if(n==0) y=1;
	else if(n==1) y=x;
	else y=((2*n-1)*x-f(n-1,x)-(n-1)*f(n-2,x))/n;
	return(y);
}
void main()
{
	int n;
	double x;
  printf("请输入非负整数 n:");
	scanf("%d",&n);
	puts("please input x:");
	scanf("%lf",&x);
	printf("P%d(%.2f)=%.2f\n",n,x,f(n,x));

}
