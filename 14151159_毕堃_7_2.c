#include<stdio.h>
#include<math.h>
int xiao(float x,float y,float z);
int da(float x,float y,float z);
int deng(float x,float y,float z);
int main()
{
	printf("请分别输入三个数作为一元二次方程的三个系数a,b,c:\n");
	float a,b,c;
	scanf("%f,%f,%f",&a,&b,&c);
	printf("\n");
	if((b*b-4*a*c)==0){
		deng(a,b,c);
	}
	else if((b*b-4*a*c)>=0){
		da(a,b,c);
	}
	else{
		xiao(a,b,c);
	}
	return 0;
}

int xiao(float x,float y,float z)
{
	
	printf("方程两个根分别为:%f+%fi,%f-%fi\n",(-y)/(2*x),(sqrt(-y*y+4*x*z))/(2*x),(-y)/(2*x),(sqrt(-y*y+4*x*z))/(2*x));
	return 0;
}

int da(float x,float y,float z)
{
	float x1,x2;
	x1=(-y+sqrt(y*y-4*x*z))/(2*x);
	x2=(-y-sqrt(y*y-4*x*z))/(2*x);
	printf("方程两实根分别为%f,%f\n",x1,x2);
	return 0;
}

int deng(float x,float y,float z)
{
	float x0;
	x0=(-y+sqrt(y*y-4*x*z))/(2*x);
	printf("方程两相等实根为%f,%f\n",x0,x0);
	return 0;
}
