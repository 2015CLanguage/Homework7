#include<stdio.h>
#include<math.h>
float a, b, c, d, x, y;
float d1(float a, float b)
{
	x = (-b + sqrt(d)) / (2 * a);
	y = (-b - sqrt(d)) / (2 * a);
}
float d2(float a, float b)
{
	x = (-b ) / (2 * a);
}
float d3(float a, float b)
{
	x = (-b) / (2 * a);
	y = ( sqrt(-d)) / (2 * a);
}
void main()
{
	printf("请输入a,b,c的值：\n");
	scanf_s("%f%f%f", &a, &b, &c);
	printf("方程为：%.2fx^2+%.2fx+%.2f\n");
	d = b*b - 4 * a*c;
	if (d > 0){
		d1(a,b);
		printf("x1=%,x2=%f\n", x, y);
	}
	else{
		if (d = 0)
		{
			d2(a,b);
			printf("x=%f\n");
		}
		else
		{
			d3(a,b);
			printf("x1=%f+%fi,x2=%f-%fi\n", x, y);
		}
	}
}
