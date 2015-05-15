#include "stdio.h"
#include "string.h" 
int main()
{
	char a[200],b[100];                //数组长度可由实际情况进行更改，但a应大于两字符串长度之和。 
	printf("请输入第一串字符：");
	gets(a); 
	printf("请输入第二串字符：");
	gets(b);
	strcat(a,b);
	printf("连接后为：");
	puts(a);
}
