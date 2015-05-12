#include<stdio.h>
#include<string.h>
void connect(char str1[],char str2[],char str[])
{
	int i,j;
	for (i=0;str1[i]!='\0';i++)str[i]=str1[i];
	for (j=0;str2[j]!='\0';j++)str[i+j]=str2[j];
	str[i+j]='\0';
}
void main()
{
	char str1[20],str2[20],str[40];
	scanf("%s",str1);
	scanf("%s",str2);
	connect(str1,str2,str);
	printf("%s",str);
}
