#include <stdio.h>
#include <math.h>


int n;
int check(int a)
{
	int i;
	if (a==2)  return 1;
	double x=sqrt(a)+1;
	for (i=2; i<x; i++) 
		if (a%i==0)  return 0;
	return 1;
}


int main()
{
	scanf("%d",&n);
	if (check(n))  printf("%d是素数\n",n);
	   else printf("%d不是素数\n",n);
	 return 0;
}
