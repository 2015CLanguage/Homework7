# include <stdio.h>
int hcf(int x,int y);
int lcd(int x,int y);
	int hcf(int x,int y)
	{
	int min,max,i,a;//a为最小公倍数
	if(x>y)
	{min=y;
	max=x;}
	else
	{min=x;
	max=y;}
	for(i=max;i<=x*y;i++)
	{
		if(i%x==0&&i%y==0)
		{a=i;
		break;}

		
	}
		return a;
	}

	int lcd(int x,int y)
	{
		int b;//b为最大公约数
		b=(x*y)/hcf(x,y);
		return b;
	}
