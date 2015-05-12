#include<stdio.h>
#include<math.h>
void plus(float, float);       //声明函数与变量
void zero(float, float);
void minus(float, float);
float delte, x1, x2, m, n;
void main()
{
	float a, b, c;
	printf("输入一元二次方程的三个系数:\n");
	scanf("%f%f%f", &a, &b, &c);        //输入系数
	delte = b*b - 4 * a*c;
	printf("方程为:%5.2f*x*x+%5.2f*x+%5.2f=0\n", a, b, c);
	if (delte>0)                     //判断类型
		plus(a, b);
	else if (delte == 0)
		zero(a, b);
	else
		minus(a, b);
}
void plus(float a, float b)         //判别式正号时
{
	x1 = (-b + sqrt(delte)) / (2 * a);
	x2 = (-b - sqrt(delte)) / (2 * a);
	printf("x1=%5.2f\tx2=%5.2f\n", x1, x2);
}
void zero(float a, float b)          //判别式为0
{
	x1 = -b / (2 * a);
	printf("x1=x2=%5.2f\n", x1);
}
void minus(float a, float b)          //判别式为负
{
	m = -b / (2 * a);
	n = sqrt(-delte) / (2 * a);
	printf("x1=%5.2f-%5.2fi\tx2=%5.2f+%5.2fi\n", m, n, m, n);
}
