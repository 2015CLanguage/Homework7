#include <stdio.h>
#include <math.h>
float x1,x2,q,w;
void dayu(float x,float y,float z)
{
	
	w=sqrt(y*y-4*x*z)/(2*x);
	q=(-y)/(2*x);
	x1=q+w;
	x2=q-w;
}
void xiaoyu(float x,float y,float z)
{
	
	w=sqrt(-y*y+4*x*z)/(2*x);
	q=(-y)/(2*x);
}
void dengyu(float x,float y,float z)
{
    q=(-y)/(2*x);
	x1=q;
	x2=q;	
}
void main()
{
	float a,b,c,disc;
	printf("请输入a,b,c:\n");
	scanf("%f,%f,%f",&a,&b,&c);
	disc=b*b-4*a*c;
	if(disc>0)
	{
		dayu(a,b,c);
		printf("函数两根分别为:x1=%f,x2=%f\n",x1,x2);
	}
	else if(disc==0)
	{
		dengyu(a,b,c);
		printf("函数两根分别为:x1=%f,x2=%f\n",x1,x2);
	}
	else
	{
		xiaoyu(a,b,c);
		printf("函数两根分别为x1=%f+%fi,x2=%f-%fi\n",q,w,q,w);
	}
}
