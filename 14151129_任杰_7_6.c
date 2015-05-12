#include <stdio.h>
void l(char string1[], char string2[], char string[])
{
	int i, j;
	for (i = 0; string1[i] != '\0'; i++)
		string[i] = string1[i];
	for (j = 0; string2[j] != '\0'; j++)
		string[i + j] = string2[j];
	string[i + j] = '\0';
}
void main()
{
	char s1[100], s2[100], s[200];
	printf("请输入一串字符串:\n");
	gets_s(s1);
	printf("再输入一串字符串:\n");
	gets_s(s2);
	l(s1, s2, s);
	printf("连接后字符串为:\n");
	puts(s);
}
