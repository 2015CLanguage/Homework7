#include<stdio.h>
float legendre(int n,float x);
void main()
{
    int n;
	float x,y;
	printf("请输入n和x:\n");
	scanf("%d%f",&n,&x);
	y=legendre(n,x);
	printf("多项式结果为:\n%f\n",y);
}
float legendre(int n,float x)
{
    float re;
	if(n==0)
		re=1;
	else if(n==1)
		re=x;
	else
		re=((2*n-1)*x*legendre(n-1,x)-(n-1)*legendre(n-2,x))/n;  //书上的题目居然把乘号写成了减号,学习辅导上少了括号//
	return re;
}
