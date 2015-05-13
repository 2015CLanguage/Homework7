#include<stdio.h>
#include<math.h>
float x1, x2, Delta, m, n;
int main()
{
	void h0(float, float);
	void e0(float, float);
	void s0(float, float);
	float a, b, c;
	printf("请输入a,b,c:");
	scanf("%f,%f,%f", &a, &b, &c);
	printf("方程为：%5.2fx*x+%5.2fx+%5.2f=0\n", a, b, c);
	Delta = b*b - 4 * a*c;
	printf("结果是：\n");
	if (Delta > 0)
	{
		h0(a, b);
		printf("x1=%f\nx2=%f\n", x1, x2);
	}
	else if (Delta < 0)
	{
		s0(a, b);
		printf("x1=%f+%fi\nx2=%f-%fi\n", m, n, m, n);
	}
	else
	{
		e0(a, b);
		printf("x1=x2=%f\n", x1);
	}
	return 0;
}
void h0(float a, float b)
{
	x1 = (-b + sqrt(Delta)) / (2 * a);
	x2 = (-b - sqrt(Delta)) / (2 * a);
}
void e0(float a, float b)
{
	x1 = x2 = (-b) / (2 * a);
}
void s0(float a, float b)
{
	m = -b / (2 * a);
	n = sqrt(-Delta) / (2 * a);
}
