#include<stdio.h>
int max(int m,int n)
{
	int i,a;
	for(i=1;i<=n;i++)
	{
		if(m%i==0&&n%i==0)a=i;
	}
return a;
} 
int min(int m,int n)
{
	int i,a;
	for(i=1;i<=n;i++)
	{
		if(m%i==0&&n%i==0)a=i;
	}
return m*n/a;
}
void main()
{
	int a,b;
    scanf("%d%d",&a,&b);
    printf("最大公约数为%d",max(a,b));
	printf("最小公倍数为%d",min(a,b));
	printf("\n");
}
