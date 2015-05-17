#include<stdio.h>
#include<math.h>
int x0(int x,int y,int z);
int x1(int x,int y,int z);
int x2(int x,int y,int z);
int x0(int x,int y,int z)
{
	printf("该方程无解.\n");
}
int x1(int x,int y,int z)
{
	float m;
	m=-y/(2*x);
	printf("该方程有一个解，是x=%f.\n",m);
}
int x2(int x,int y,int z)
{
	float m,n,t;
	t=sqrt(y*y-4*x*z);
	m=(-y+t)/(2*x);
	n=(-y-t)/(2*x);
    printf("该方程有两个解，分别是x1=%f,x2=%f.\n",m,n);
}
int main()
{
	float a,b,c,i,m,n;
	printf("请依次输入a,b,c的值:");
	scanf("%f,%f,%f",&a,&b,&c);
	i=b*b-4*a*c;
	if(i<0)
	{
		x0(a,b,c);
	}
	else if(i==0)
	{
		x1(a,b,c);
	}
	else
	{
		x2(a,b,c);
	}
}
