#include<stdio.h>
void main()
{
	int f(int n);
	int x,n;
	printf("请输入一个整数:");
	scanf("%d",&x);
	if(f(x)==0)
		printf("它是一个素数\n");
    if(f(x)>0)
        printf("它不是一个素数\n");
}

int f(int n)
{
	int i,s=0;
    for(i=2;i<n;i++)
	{if(n%i==0)
	  s=s+1;}
	return s;
}
