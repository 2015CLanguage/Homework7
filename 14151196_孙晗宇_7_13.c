#include <stdio.h>
int main()
{
	int n;
	float x,y;
	float P(float x,int n);
	printf("请输入阶数(大于等于0的整数):");
	scanf("%d",&n);
	printf("请输入x:");
	scanf("%f",&x);
	re=P(x,n);
	printf("多项式值为%f\n",y);
	return 0;
}

float P(float x,int n)
{
	float y;
	if(n==0)
		y=1;
	else if(n==1)
		y=x;
	else
		re=((2*n-1)*x-P(x,n-1)-(n-1)*P(x,n-2))/n;
	return y;
}
