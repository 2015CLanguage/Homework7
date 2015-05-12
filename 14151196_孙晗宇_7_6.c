#include<stdio.h>
void linkstr(char c1[],char c2[],char c[]);
void main()
{
  char c1[100],c2[100],c[200];
	printf("请输入c1:\n");
	scanf("%c",c1);
	printf("请输入c2:\n");
	scanf("%c",c2);
	linkstr(c1,c2,c);
	printf("连接后的字符串为：\n%s\n",c);
}
void linkstr(char c1[],char c2[],char c[]) 
{
	int i,j;
	for(i=0;c1[i]!='\0';i++)
		c[i]=c1[i];
	for(j=0;c2[j]!='\0';j++)
		c[i+j]=c2[j];
  c[i+j]='\0';
}
