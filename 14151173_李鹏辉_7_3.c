#include<stdio.h>
void check(int x)
{
    int i;
	for(i=2;i<x;i++)
		if(x%i==0) break;
	if(i==x)
		printf("%d是素数\n",x);
	else
		printf("%d不是素数\n",x);
}
void main()
{
	int n;
	scanf("%d",&n);
	check(n);
}
