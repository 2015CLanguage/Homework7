#include<stdio.h>
int hcf(int a,int b);
int lcd(int a,int b);
int hcf(int a,int b)
{	
	int i;
	for(i=a;i>=1;i--)
	{
		if(a%i==0&&b%i==0)
			break;
	}
	return i;
}
int lcd(int a,int b)
{
	int i;
	for(i=a;i<=a*b;i++)
	{
		if(i%a==0&&i%b==0)
			break;
	}
	return i;
}

void main()
{
	int m,n,HCF,LCD;
	printf("请输入两个整数m,n:");
	scanf("%d,%d",&m,&n);
	HCF=hcf(m,n);
	LCD=lcd(m,n);
	printf("其最大公约数为%d\n",HCF);
	printf("其最小公倍数为%d\n",LCD);
}
