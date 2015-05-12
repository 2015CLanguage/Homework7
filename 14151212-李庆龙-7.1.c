# include<stdio.h>
void print(int m, int n);
int main()
{
	int m, n;
	printf("print two numbers:");
	scanf_s("a=%d,b=%d", &m, &n);
	print(m, n);
	system("pause");
}
void print(int m,int n)
{
	int a, b, i, p,t;
	a = m;
	b = n;
	for (i = 0; i < m; i++)
	{
		if (m>n)
		{
			p = m%n;
			if (p == 0)
			{
				printf("%d ºÍ %d µÄ×î´ó¹«Ô¼ÊýÎª£º", a, b);
				printf("%d", n);
				break;
			}
			else
			{
				m = n;
				n = p;
			}
		}
		else
		{
			t = m;
			m = n;
			n = t;
			p = m%n;
			if (p == 0)
			{
				printf("%d ºÍ %d µÄ×î´ó¹«Ô¼ÊýÎª£º", m, n);
				printf("%d", n);
				break;
			}
			else
			{
				m = n;
				n = p;
			}
		}
	}
	printf("\n");
	printf("×îÐ¡¹«±¶ÊýÎª:%d", a*b / n);
}
