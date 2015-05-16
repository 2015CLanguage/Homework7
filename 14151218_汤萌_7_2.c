#include<stdio.h>
#include<math.h>

float a, b, c, m;
int main()
{
	int two_ans(float x, float y, float z);
	int one_ans(float x, float y, float z);
	int none(float x, float y, float z);
	printf("请输入方程ax^2 + bx + c = 0 的系数a，b，c：");
	scanf("%f %f %f", &a, &b, &c);
	m = b * b - 4 * a * c;
	if (m > 0)
		two_ans(a, b, c);
	else if (m == 0)
		one_ans(a, b, c);
	else
		none(a, b, c);
	return 0;
}

int two_ans(float x, float y, float z)
{
	float x_1, x_2;
	x_1 = (-y + sqrt(m))/(2.0 * x);
	x_2 = (-y - sqrt(m))/(2.0 * x);
	printf("函数有两个不同实根：x1 = %.2f，x2 = %.2f。\n", x_1, x_2);
	return 0;
}
int one_ans(float x, float y, float z)
{
	float x_0;
	x_0 = -y / (x * 2.0);
	printf("函数两个相同实根：x = %.2f。\n", x_0);
	return 0;
}
int none(float x, float y, float z)
{
	float x_1_1, x_1_2;
	m = -m;
	x_1_1 = -y / x / 2.0;
	x_1_2 = fabs(sqrt(m) / x / 2.0);
		printf("函数有两个虚数根：x1 = %.2f+%.2f, x2 = %.2f-%.2f\n", x_1_1, x_1_2, x_1_2, x_1_2);
	return 0;
}
