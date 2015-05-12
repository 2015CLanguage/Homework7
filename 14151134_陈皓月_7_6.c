#include<stdio.h>
#include<string.h>
void link(char c1[],char c2[]); //声明函数
void main()
{
	char c1[200],c2[100];
	printf("请输入两个字符串\n");
	gets(c1);
	gets(c2);
	link(c1,c2);  //调用函数
}
void link(char c1[],char c2[])  //定义函数
{
	int i,j=0;
	for(i=0;c2[i]!='\0';i++)
	{
		j=strlen(c1);
		c1[j]=c2[i];
		c1[j+1]='\0';
	}
	puts(c1);
}
