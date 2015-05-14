#include<stdio.h>
#include<string.h>
int main()
{
void fun(char s1[],char s2[]);
char s1[100],s2[100];
printf("请输入字符串1：");
	gets(s1);
printf("请输入字符串2：");
	gets(s2);
fun(s1,s2);
return 0;
} 

void fun(char s1[],char s2[])
{
int i,j,t,k;
char s3[100];
t=strlen(s1);
k=strlen(s2);
for(i=0;i<t;i++)
	s3[i]=s1[i];
for(j=0;j<t+k;j++)
	s3[j+t]=s2[j];
printf("新字符串为：%s\n",s3);
}
