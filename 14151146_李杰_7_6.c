#include<stdio.h>
#include<string.h>
void link(char a[], char b[])
{
	strcat(a,b);
}
void main()
{
	char str1[50],str2[50];
	printf("Please input str1:");
	gets(str1);
	printf("Please input str2:");
	gets(str2);
	link(str1,str2);
	printf("The linked string: %s\n",str1);
}
