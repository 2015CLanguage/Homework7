#include<stdio.h>

int main()
{
	void connect(char line1[], char line2[], char line3[]);
	char line1[80], line2[80], line3[80];
	printf("请输入第一串字符：");
	gets(line1, 80);
	printf("请输入第二串字符：");
	gets(line2, 80);
	connect(line1, line2, line3);
	printf("\n合并后的结果是：\n%s\n", line3);
	return 0;
}

void connect(char line1[], char line2[], char line3[])
{
	int i, j;
	for (i = 0; line1[i] != '\0'; i++)
	{
		line3[i] = line1[i];
	}
	for (j = 0; line2[j] != '\0'; j++)
	{
		line3[i + j] = line2[j];
	}
	line3[i + j] = '\0';
}
