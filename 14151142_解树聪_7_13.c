#include <stdio.h>
float p(int x,int n)
{
	if(n==0)
		return 1;
	else if(n==1)
		return (x);
	else
		return ((2*n-1)*x-p(x,n-1)-(n-1)*p(x,n-2)/n);
}
int main()
{
	int x,n;
	printf("请输入n和x\n");
	scanf("%d,%d",&n,&x);
	printf("n=%d,x=%d\n",n,x);
	printf("P%d(%d)=%7.2f\n",n,x,p(x,n));
	return 0;
}
