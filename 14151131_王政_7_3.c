#include<stdio.h>
#include<math.h>
void prime(int x)
{
	int r,i,j=0;
	for(i=2;i<=sqrt(x);i++)
	{
		r=x%i;
		if(r==0)
		{
			j=1;
			break;
		}
	}
	if(j==0)
		printf("这个数是素数.\n");
	else
		printf("这个数不是素数.\n");
}
int main()
{
	int a;
	printf("请输入一个整数：");
	scanf("%d",&a);
	prime(a);
	return 0;
}
