#include<stdio.h>
void judge(int n);
int main()
{
	int n;
	printf("请输入一个整数:\n");
	scanf("%d",&n);
	judge(n);
	return 0;
}
void judge(int n)
{
	int i;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("%d不为素数\n",n);
            return;
		}
	}
	printf("%d为素数\n",n);
}
