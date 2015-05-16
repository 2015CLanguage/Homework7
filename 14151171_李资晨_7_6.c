#include <stdio.h>
#include "string.h"
int main()
{
	char a[200],b[100];
	printf("输入第一串字符：");
	gets(a);
	printf("输入第二串字符：");
	gets(b);
	strcat(a,b);
	printf("连接后：");
	puts(a);
}
