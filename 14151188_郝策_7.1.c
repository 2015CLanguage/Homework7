#include"stdio.h"
int max(int num1,int num2);
int min(int num1,int num2);

int main()
{
	int n1,n2,vmax,vmin;
	printf("输入两个数字\n");
	printf("num1=");
	scanf("%d",&n1);
	printf("num2=");
	scanf("%d",&n2);
	vmax=max(n1,n2);
	vmin=min(n1,n2);
	printf("最大公约数是 %d",vmax);
	printf("最小公倍数是 %d",vmin);
}

int max(int num1,int num2)
{
	int i,v;
	for(i=num1;i>=1;i--)
	{
		if((num1%i==0)&&(num2%i==0))
		{
			v=i;
			break;
		}

	}
	return v;
}

int min(int num1,int num2)
{
	int i,v;
	for(i=num1;i<=num1*num2;i++)
	{
		if((i%num1==0)&&(i%num2==0))
		{
			v=i;
			break;
		}
	}
	return v;
}
