#include<stdio.h>
int f(int x);
int main()
{	
	int a;
	printf("请输入一个整数：");
	scanf("%d",&a);
	if(f(a))
		printf("%d是一个素数",a);
	else
		printf("%d不是一个素数\n",a);
	return 0;
}
int f(int x)
{
	int i,flag=1;
	for(i=2;i<x/2&&flag==1;i++)
	{
		if(x%i==0)
			flag=0;
	}
	return(flag);
}
