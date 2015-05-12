#include<stdio.h>
void connect(char s1[],char s2[],char s[]);
int main()
{
	char s1[50],s2[50],s[100];
	printf("input string1:");
	gets(s1);
	printf("input string2:");
	gets(s2);
	connect(s1,s2,s);
	printf("\nThe new string is %s\n",s);
	return 0;
}
void connect(char s1[],char s2[],char s[])
{
	int i,j;
	for(i=0;s1[i]!='\0';i++)
		s[i]=s1[i];
	for(j=0;s2[j]!='\0';j++)
		s[i+j]=s2[j];
	s[i+j]='\0';
}
