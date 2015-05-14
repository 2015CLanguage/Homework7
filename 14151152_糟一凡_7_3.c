#include<stdio.h>
#include<math.h>
void prime(int x)
{
	int i,r, t=0;
	for(i=2;i<=sqrt(x);i++)
	{
		r=x%i;
		if(r=0)
		{
			t=1;
			break;
		}
	}
	if(t==0)
		printf("该数不是一个素数");
	else
		printf("该数是一个素数");
}
int main()
{
	int a;
	printf("请输入一个整数：");
	scanf("%d",&a);
	prime(a);
	printf("\n");
	return 0;
}
