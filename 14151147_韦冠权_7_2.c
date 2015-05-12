#include<stdio.h>
#include<math.h>
float x1, x2, s;
int main()
{
	void high(float, float);
	void equal(float, float);
	void low(float, float);
	float a, b, c;
	printf("输入a,b,c的值：");
	scanf("%f%f%f", &a, &b, &c);
	printf("方程%5.2f*x^2+%5.2f*x+%5.2f=0\n", a, b, c);
	printf("的根是：\n");
	s = b*b - 4 * a*c;
	if (s>0)
	{
		high(a, b);
	}
	else if (s == 0)
	{
		equal(a, b);
	}
	else
	{
		low(a, b);
	}

	return 0;
}
void high(float a, float b)
{
	x1 = (-b + sqrt(s)) / (2 * a);
	x2 = (-b - sqrt(s)) / (2 * a);
	printf("x1=%f\nx2=%f\n", x1, x2);
}
void equal(float a, float b)
{
	x1 = x2 = (-b) / (2 * a);
	printf("x1=%f\nx2=%f\n", x1, x2);
}
void low(float a, float b)
{
	float p, q;
	p = (-b) / (2 * a);
	q = sqrt(-s) / (2 * a);
	printf("x1=%f+%fi\nx2=%f+%fi\n", p, q, p, q);
}
