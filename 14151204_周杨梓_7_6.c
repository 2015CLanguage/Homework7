#include<stdio.h>
void connect(char a[],char b[]);
int main()
{
	char a[100],b[100];
	printf("请输入字符串一:\n");
	scanf("%s",a);
	printf("请输入字符串二:\n");
	scanf("%s",b);
	connect(a,b);
	return 0;
}
void connect(char a[],char b[])
{
	int i,j;
	char c[100];
	for(i=0;a[i]!='\0';i++)
	{
		c[i]=a[i];
	}
	for(j=0;b[j]!='\0';j++)
	{
		c[i+j]=b[j];
	}
	c[i+j]='\0';
	printf("连接后的字符串为:%s\n",c);
}
