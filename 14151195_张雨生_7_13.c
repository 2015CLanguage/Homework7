#include<stdio.h>
float p(int n,int x);
int main()
{
	int x,n;
	printf("请输入n,x:");
	scanf("%d,%d",&n,&x);
	printf("n=%d,x=%d\n",n,x);
	printf("p%d(%d)=%.2f\n",n,x,p(n,x));
	return 0;
}
float p(int n,int x)
{
	if(n==0)
		return(1);
	else if(n==1)
		return(x);
	else
		return(((2*n-1)*x-p((n-1),x)-(n-1)*p((n-2),x))/n);
}
