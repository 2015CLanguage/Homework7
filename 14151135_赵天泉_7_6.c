#include<stdio.h>
void f(char s1[],char s2[],char s3[]);
int main()
{
	char s1[100],s2[100],s3[100];
	printf("请输入两个字符串：\n");
	scanf("%s\n%s",&s1,&s2);
	f(s1,s2,s3);
	printf("连接后的结果为：%s\n",s3);
	return 0;
}
void f(char s1[],char s2[],char s3[])
{
	int i,j;
	for(i=0;s1[i]!='\0';i++)
		s3[i]=s1[i];
	for(j=0;s2[j]!='\0';j++)
		s3[i+j]=s2[j];
	s3[i+j]='\0';
}
