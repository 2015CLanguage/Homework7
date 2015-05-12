#include<stdio.h>
#include<string.h>
void connect(char str1[20]='',char str2[20]='')
{
	int i,j;
	char str[40]='';
	for (i=0;str1[i]!='\0';i++)str[i]=str1[i];
	for (j=0;str2[j]!='\0';j++)str[i+j]=str2[j];
	str[i+j]='\0';
	puts("%s",str[]);
}
void main()
{
	char str1[20]='',str2[20]='';
	gets(str1[]);
	gets(str2[]);
	connect(str1[],str2[]);
}
