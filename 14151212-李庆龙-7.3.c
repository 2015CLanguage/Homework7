# include<stdio.h>
void judge(int n);
int main()
{
	int n;
	printf("input the number you want to judge:");
	scanf_s("%d", &n);
	judge(n);
	system("pause");
}
void judge(int n)
{
	int i,t=0;
	for (i = 2; i < n; i++)
	{
		if (n % i == 0)
		{
			printf("%d²»ÊÇËØÊý\n", n);
			break;
		}
		else
		{
			t++;
		}
	}
	if (t == n - 2)
		printf("%dÊÇËØÊý\n", n);
}
