#include<stdio.h>
float p(float,float);
int main()
{
	float n,x;
	printf("请输入n,x的值\n");
	scanf("%f,%f",&n,&x);
	printf("pn=%.2f\n",p(n,x));
	return 0;
}

float p(float a,float b)//递归方法求解
{
	if(a==0)
		return(1);
	else if(a==1)
		return(b);
	else
		return((2*a-1)*b-p((a-1),b)-(a-1)*p((a-2),b))/a;
		

}
