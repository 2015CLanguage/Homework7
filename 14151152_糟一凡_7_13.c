#include<stdio.h>
float P(float X,int N)
{
	float c;
	if(N==0)
	{
		c=1;
	}
	else if(N==1)
	{
		c=X;
	}
	else
	{
		c=((2*N-1)*X-P(X,N-1)-(N-1)*P(X,N-2))/N;
	}
	return c;
}
int main()
{
	int n;
	float x;
	printf("请输入n,x:");
	scanf("%d,%f",&n,&x);
	printf("相应的勒让德多项式的值为：%f\n",P(x,n));
	return 0;
}

