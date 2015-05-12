#include "stdio.h"
void con(char[], char[]);
void main()
{
	char s1[100], s2[100];
	printf("输入第一段字符;\n");            //输入两段字符
	gets_s(s1);
	printf("输入第二段字符;\n");
	gets_s(s2);
	con( s1, s2);
}
void con(char s1[], char s2[])          //定义函数连接字符串
{
	int i=0,j=0;
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		s1[i++] = s2[j++];
	s1[i] = '\0';
	printf("新的字符串为:%s\n", s1);
}
