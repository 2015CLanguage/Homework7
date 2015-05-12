#include<stdio.h>

int main()
{
	int aaa(int,int);
	int bbb(int,int,int);
	int u,v,h,l;
	scanf("%d,%d",&u,&v);
	h=aaa(u,v);
	printf("最小公倍数为%d\n",h);
	l=bbb(u,v,h);
	printf("最大公因数为%d\n",l);
	return 0;
}
int aaa(int u,int v)
{int t,r;
if(v>u)
{t=u;
u=v;
v=t;}
while((r=u%v)!=0)
{u=v;
v=r;}
return(v);
}
int bbb(int u,int v,int h)
{return(u*v/h);
}
