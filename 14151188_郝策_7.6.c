#include"stdio.h"
void cat(char a[50],char b[50]);
int main()
{
	char a[50],b[100];
	printf("请输入字符串\n");
	printf("char1=");
	gets(a);
	printf("char2=");
	gets(b);
	cat(a,b);
}

void cat(char a[50],char b[50])
{
	char c[100];
	int i,j;
	for(i=0;a[i]!=0;i++)
		c[i]=a[i];
	for(j=0;b[j]!=0;j++)
		c[i+j]=b[j];
	c[i+j]='\0';	
	puts(c);
}
