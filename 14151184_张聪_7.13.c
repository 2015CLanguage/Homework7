#include<stdio.h>
int p(int n, int x)
{
	if(n==0)
		return(1);
	else if(n==1)
		return(x);
	else
		return((2*n-1)*x-p((n-1),x)-(n-1*p((n-2),x))/n);
}
int main()
{
	int n,x,s;
	printf("input n and x");
	scanf("%d,%d",&n,&x);
	s=p(n,x);
	printf("Pn(x)的值是%d\n",s);
	return 0;
}
