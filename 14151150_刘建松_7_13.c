#include<stdio.h>
float P(int n,int x);
int main()
{
	int x,n;
	float m;
	printf("x=");
	scanf("%d",&x);
	printf("n=");
	scanf("%d",&n);
	m=P(n,x);
	printf("P%d(%d)=%6.2f\n",n,x,m);
	return 0;
}
float P(int n,int x)
{
	if(n==0)
	return 1;
	else if(n==1)
	return x;
	else
	return (2*n-1)*x-P((n-1),x)-(n-1)*P((n-2),x)/n	;
}
