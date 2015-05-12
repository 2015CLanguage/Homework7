#include<stdio.h>
float P(int n,int x);
int main()
{
	int x,n;
	printf("请输入阶数n=");
	scanf("%d",&n);
	printf("请输入自变量x=");
	scanf("%d",&x);
	printf("%.2f\n",P(n,x));
	return 0;
}
float P(int n,int x)
{
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else
		return ((2*n-1)*x-P((n-1),x)-(n-1)*P((n-2),x))/n;
}
