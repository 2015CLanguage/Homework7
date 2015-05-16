Enter file contents here
# include <stdio.h>
# include <math.h>
int main()
{
	float a, b, c, x1, x2, i;
	int l(float a,float b,float c);
	int m(float a, float b,float c);
	void printstar();
	printf("请输入三个数字：\n");
	scanf_s("%f,%f,%f", &a, &b, &c);
	if (b*b - a * 4 * c>0)
	{
		i= l(a, b, c);
		printf("%f,%f", (-b) / 2 * a + i / 2 * a, (-b) / 2 * a - i / 2 * a);
	}
	else if (b*b - a * 4 * c == 0)
	{
		x1 = x2 =  m(a, b, c);
		printf("%f,%f", x1, x2);
	}
	else
		printstar();
	return 0;
}
int l(float a, float b, float c)
{

	float t;
	 t = sqrt(b*b - 4 * a*c);
	return t;
}
int m(float a, float b, float c)
{
	float t;
	t = (-b) / 2 * a;
	return t;
}
void printstar()
{
	printf("无解");
}
