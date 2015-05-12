# include<stdio.h>
# include<math.h>
float max(float p, float a,float b);
float midle(float p, float a, float b);
float min(float p, float a, float b);
int main()
{
	float a, b, c, p;
	printf("input a,b,c:");
	scanf_s("a=%f,b=%f,c=%f", &a, &b, &c);
	p = b*b -4*a*c;
	if (p > 0)
		max(p, a, b);
	else if (p == 0)
		midle(p, a, b);
	else
		min(p, a, b);
	system("pause");
}
float max(float p, float a, float b)
{
	printf("the first answer is %f", (-b + sqrt(p)) / (2 * a));
	printf("the first answer is %f", (-b - sqrt(p)) / (2 * a));
}
float midle(float p, float a, float b)
{
	printf("the answer is %f", (-b + sqrt(p)) / (2 * a));
}
float min(float p, float a, float b)
{
	printf("no answer");
}
