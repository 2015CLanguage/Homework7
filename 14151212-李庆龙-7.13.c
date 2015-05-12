# include<stdio.h>
float P(float x, int n);
int main()
{
	float x,s;
	int n;
	printf("input x and n :");
	scanf_s("x=%f,n=%d", &x, &n);
	s = P(x, n);
	printf("P%d(%f) is %f", n,x,s);
	system("pause");
}
float P(float x, int n)
{
	float s;
	if (n == 0)
	{
		s = 1;
	}
	else if (n == 1)
	{
		s = x;
	}
	else
	{
		s = ((2 * n - 1)*x - P(x, n - 1) - (n - 1)*P(x, n - 2)) / n;
	}
	return(s);
}
