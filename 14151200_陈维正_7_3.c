#include <stdio.h>
int main()
{
void f(int x);
int a;
printf("请输入一个整数:\n");
scanf("%d",&a);
f(a);
return 0;
}

void f(int x)
{
int i;
for(i=2;i<=x;i++)
	{
	if(x%i==0)
		{
		if(i<x)
		{
		printf("不是素数");
		break; 
		}
		else
			printf("是素数");
		}
	}
}
