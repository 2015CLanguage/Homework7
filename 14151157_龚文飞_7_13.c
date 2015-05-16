# include<stdio.h>
float p1(int x, int n);
float p1(int x, int n)
{
    if(n==0)
	{
		return 1;
	}
	if(n==1)
		return x;
	else
	{
		return (2*n-1)*x-p1((n-1),x)-(n-1)*p1((n-2),x)/n;	
	}
	}
int main(void)
{
	int n,x;
	printf("请输入n的值:\n");
	scanf("%d",&n);
	printf("请输入x的值:\n");
	scanf("%d",&x);
	p1(x,n);
	printf("%d阶勒让德多项式的值为%f:",n,p1(x,n));
	return 0;
}
