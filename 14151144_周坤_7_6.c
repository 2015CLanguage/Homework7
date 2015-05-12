# Homework7
#include<stdio.h>
int main()
{
	void strca(char s1[],char s2[],char s[]);
	char s1[50],s2[50],s[100];
	printf("input s1:");
	scanf("%s",s1);
	printf("input s2:");
	scanf("%s",s2);
	strca(s1,s2,s);
	printf("\n连接后的字符串为%s\n:",s);
	return 0;
}
void strca(char s1[],char s2[],char s[])
{
	int i,j;
	for(i=0;s1[i]!='\0';i++)
		s[i]=s1[i];
	for(j=0;s2[j]!='\0';j++)
		s[i+j]=s2[j];
	s[i+j]='\0';
}
