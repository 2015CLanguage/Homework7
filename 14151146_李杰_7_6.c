#include<stdio.h>
#include<string.h>
char link(char a[], char b[],char c[])
{
	strcat(a,b);
}
void main()
{
	char str1[50],str2[50],str[50];
	printf("Please input str1:");
	gets(str1);
	printf("Please input str2:");
	gets(str2);
	link(str1,str2,str);
	printf("The linked string: %s\n",str1);
}
