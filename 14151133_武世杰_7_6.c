#include<stdio.h>
int main()
{
	void c(char str1[], char str2[], char str[]);
	char a1[100], a2[100], a[100];
	printf("输入第一句话：");
	scanf("%s", a1);
	printf("输入第二句话：");
	scanf("%s", a2);
	c(a1, a2, a);
	printf("\n合并结果是：%s\n", a);
	return 0;
}
void c(char str1[], char str2[], char str[])
{
	int i, j;
	for (i = 0; str1[i] != '\0'; i++)
		str[i] = str1[i];
	for (j = 0; str2[j] != '\0'; j++)
		str[i + j] = str2[j];
	str[i + j] = '\0';
}
