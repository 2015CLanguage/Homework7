#include <stdio.h>
int main()
{
	int n,sign;
	int is_prime(int n);
	printf("请输入一个数:");
	scanf("%d",&n);
	sign=is_prime(n);
	if(sign==1)
	{
		printf("不是素数\n");
	}
	else
	{
		printf("是素数\n");
	}
	return 0;
}

int is_prime(int n)
{
	int i,sign=0;
	for(i=2;i<(n/2);i++)
	{
		if(n%i==0)
		{
			sign=1;
			break;
		}
	}
	return sign;
}
	
