# include <stdio.h>
# include<string.h>
void link(char *p1, char *p2,int m,int n);
int main()
{
	char a[40], b[20];
	char *p1, *p2;
	int m, n;
	printf("input the two strings:\n");
	gets_s(a,20);
	gets_s(b,20);
	p1 = a;
	p2 = b;
	m = strlen(a);
	n = strlen(b);
	link(p1, p2,m,n);
	printf("%s", p1);
	system("pause");
}
void link(char *p1, char *p2,int m,int n)
{
	int i;
	for (i = 0; i < n; i++)
	{
		*(p1+++m) = *(p2 + i);
	}
	*(p1 + m+n) = '\0';
}
