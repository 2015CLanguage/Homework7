#include<stdio.h>
#include<string.h>
void link(char x[],char y[])
{
	puts(strcat(x,y));
}
void main()
{
	char x[50],y[50];
	puts("please input string 1:");
	gets(x);
	puts("please input string 1:");
	gets(y);
	puts("the resulut is:");
	link(x,y);
}
