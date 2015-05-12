#include<stdio.h>
void link(char s1[],char s2[],char s[]);
int main()
{
	char a1[100],a2[100],a[100],i,k;
	printf("请输入要连接的字符串：\n");
	printf("a1[100]=");
	gets(a1);
	printf("a2[100]=");
	gets(a2);
	link(a1,a2,a);
	return 0;
}
void link(char s1[],char s2[],char s[])
{
	int i,j;
	for(i=0;s1[i]!='\0';i++)
		s[i]=s1[i];
	for(j=0;s2[j]!='\0';j++)
		s[i+j]=s2[j];
	s[i+j]='\0';
	puts(s);
}
