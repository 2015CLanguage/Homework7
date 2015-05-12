#include <stdio.h>
#include <math.h>
#include <string.h>


double x;
int n;

double p(int k)
{
	if (k==0) return 1;
	if (k==1)  return x;
	double y=(2*k-1)*x-p(k-1)-(k-1)*p(k-2)/k;
	return y;
}

int main()
{
	scanf("%lf%d",&x,&n);
	printf("%.2lf\n",p(n));
	return 0;
}
