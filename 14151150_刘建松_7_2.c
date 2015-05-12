#include<stdio.h>
#include<math.h>
void case1(float x,float y,float z);
void case2(float x,float y,float z);
void case3(float x,float y,float z);
int main()
{
	float a,b,c,m;
	printf("请输入三个数（用逗号连接）：");
	scanf("%f,%f,%f",&a,&b,&c);
	printf("等式为：%f*x*x+%f*x+%f=0\n",a,b,c);
	m=b*b-4*a*c;
	if(m>0)
		case1(a,b,c);
	else if(m==0)
		case2(a,b,c);
	else
		case3(a,b,c);
	return 0;
}
void case1(float x,float y,float z)
{
	float i,j,x1,x2;
	i=(-y)/(2*x);
	j=sqrt(y*y-4*x*z)/(2*x);
	x1=i+j;
	x2=i-j;
	printf("x1=%f,x2=%f\n",x1,x2);
}
void case2(float x,float y,float z)
{
	float x1,x2;
	x1=x2=(-y)/(2*x);
	printf("x1=%f,x2=%f\n",x1,x2);
}

void case3(float x,float y,float z)
{
	float i,j,x1,x2;
	i=(-y)/(2*x);
	j=sqrt(-(y*y-4*x*z))/(2*x);
	printf("x1=%f+%fi,x2=%f+%fi\n",i,j,i,j);
}
