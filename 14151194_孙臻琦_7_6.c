#include<stdio.h>
#include<string.h>
void f(char a1[],char a2[]); 
void main()
{
	char a1[100],a2[100];
	printf("请输入两个字符串\n");
	gets(a1);
	gets(a2);
	f(a1,a2); 
}
void f(char a1[100],char a2[100])
{
	printf("%s\n",strcat(a1,a2));
}
