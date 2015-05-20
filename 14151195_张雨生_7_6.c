# include <stdio.h>
int main()
{
	int lmw(char a[], char b[]);
	char c[30], d[30], e[60];
	printf("请输入第一段字符：");
	gets_s(c);
	printf("请输入另一段字符：");
	gets_s(d);
	e[60] = lmw(c, d);
	return 0;
}
int lmw(char a[], char b[])
{
	char f[60];
	int i, j;
	for (i = 0; a[i] != '\0'; i++)
		 f[i] = a[i];
	for (j = i; b[j-i ] != '\0'; j++)
		f[j] = b[j -i];
	f[j] = '\0';
	printf("%s", &f);
	return (f[60]);
}
