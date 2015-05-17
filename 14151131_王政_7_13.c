#include<stdio.h>
float P(int m,float y)
{
	float t;
	if(m==0)
	{
		t=1;
	}
	else if(m==1)
	{
		t=y;
	}
	else
	{
		t=((2*m-1)*y-P(y,m-1)-(m-1)*P(y,m-2))/m;
	}
	return t;
}
int main()
{
	int n;
	float x;
	printf("请依次输入n和x:");
	scanf("%d,%f",&n,&x);
	printf("该勒让德多项式的值为:%f\n",P(n,x));
	return 0;
}
