#include<stdio.h>
#include<string.h>
void addstr(char a[],char b[]);
void main()
{
	char a[16]={"Thank you"},b[16]={"really"};
    addstr(a,b);
}
void addstr(char a[],char b[])
{
	strcat(a,b);
	puts(a);
}
