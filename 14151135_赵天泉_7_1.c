#include<stdio.h>
int hcf(int x,int y);
int lcd(int x,int y,int z);
int main()
{	
	int a,b,h,l;
	printf("请输入两个整数：");
	scanf("%d,%d",&a,&b);
	h=hcf(a,b);
	l=lcd(a,b,h);
	printf("两个整数的最大公约数为%d：",h);
	printf("两个整数的最小公倍数为%d：",l);
	printf("\n");
	return 0;
}
int hcf(int x,int y)
{
	int t,k;
	if(x<y)
	{
		t=x;
		x=y;
		y=t;
	}
	while(x%y!=0)
	{
		k=x%y;
		x=y;
		y=k;
	}
	return(y);
}
int lcd(int x,int y,int z)
{
	return(x*y/z);
}
