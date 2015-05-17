#include"stdio.h"
void link(char string1[],char string2[],char string[]);
void main()
{
	char s1[100],s2[100],s[100];
	printf("输入字符串1:\n");
	scanf("%s",s1);
	printf("输入字符串2:\n");
	scanf("%s",s2);
	link(s1,s2,s);
	printf("连接的字符为:%s\n",s);

}
void link(char string1[],char string2[],char string[])
{
	int i,j;
	for(i=0;string1[i]!='\0';i++)
		string[i]=string1[i];
	for(j=0;string2[j]!='\0';j++)
		string[i+j]=string2[j];
	string[i+j]='\0';
}
