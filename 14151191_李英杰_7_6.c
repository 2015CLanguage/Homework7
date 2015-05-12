#include<stdio.h>
void linkstr(char s1[],char s2[],char s[]);
void main()
{
  char s1[100],s2[100],s[200];
	printf("请输入s1:\n");
	scanf("%s",s1);
	printf("请输入s2:\n");
	scanf("%s",s2);
	linkstr(s1,s2,s);
	printf("连接后的字符串为：\n%s\n",s);
}
void linkstr(char s1[],char s2[],char s[]) 
{
	int i,j;
	for(i=0;s1[i]!='\0';i++)
		s[i]=s1[i];
	for(j=0;s2[j]!='\0';j++)
		s[i+j]=s2[j];
  s[i+j]='\0';
}
