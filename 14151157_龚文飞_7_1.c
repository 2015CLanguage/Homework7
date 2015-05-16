# include <stdio.h>
int hcf(int x,int y);
int lcd(int x,int y);
	int hcf(int x,int y)
	{
	int min,max,i,a;
	{
		min=y;
        max=x;
	}
	else
	{
		min=x;

		max=y;}
	for(i=max;i<=x*y;i++)
	{
		if(i%x==0&&i%y==0)
		{
			a=i;
			break;
		}

	}
		return a;
	}

	int lcd(int x,int y)
	{
		int b;
		b=(x*y)/hcf(x,y);
		return b;
	}
int main(void)
{
	int m,n,a,b;
	printf("请输入两个整数：\n");
	scanf("%d%d",&m,&n);
	a=hcf(m,n);
	b=lcd(m,n);
	printf("最大公约数为：%d",b);
	printf("最小公倍数为为：%d",a);
  return 0;
}
