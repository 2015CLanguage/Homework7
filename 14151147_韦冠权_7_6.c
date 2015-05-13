#include<stdio.h>
int main()
{
	void link(char s1[], char s2[],char s[]);
	char s1[100], s2[100], s[200];
	printf("输入第一个字符串：\t");
	gets_s(s1);
	printf("输入第二个字符串：\t");
	gets_s(s2);
	link(s1, s2,s);
}
void link(char s1[],char s2[],char s[])
{
	int i, j;
	for (i = 0; s1[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		s[i + j] = s2[j];
	}
	s[i + j] = '\0';
	printf("\n组合起来的字符串是：\t%s\n", s);
}
