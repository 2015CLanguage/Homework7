#include<stdio.h>
int yue(int a,int b);
int bei(int c,int d,int f);

int main()//主函数接受输入，交换次序
{
	int  e,t,x,y,s1,s2;
	
	printf("请输入两个数\n");
	scanf("%d %d",&x,&y);

	if(x<y)
	{
		t=x;
		x=y;
		y=t;
	}

	s1=yue(x,y);//调用函数
	e=s1;
	s2=bei(x,y,e);

	printf("最大公约数为%d,最小公倍数为%d\n",s1,s2);

	return 0;
}

int yue(int a,int b)//求约数
{
	int r;
	while(b!=0)
	{
		r=a%b;
		a=b;
		b=r;
	}
	return a;

}



int bei(int c,int d,int f)//求倍数
{
	return ((c*d)/f);
}
