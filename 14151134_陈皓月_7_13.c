#include<stdio.h>
float p(int n,float x);   //声明函数
void main()
{
	float x;
	int n;
	printf("请输入整数n\n");
	scanf("%d",&n);
	printf("请输入x\n");
	scanf("%f",&x);
	printf("勒让德多项式的值为%.3f\n",p(n,x));  //调用函数
}
float p(int n,float x)//定义函数
{
	if(n==0)
		return 1;
	else if(n==1)
		return x;
	else
		return ((2*n-1)*x-p(n-1,x)-(n-1)*p(n-2,x))/n;
}
